/*Rakshit Nautiyal
C19313276
Tree Drawing Problem*/

#include <stdio.h>


int main()
{
    int size_of_tree,space,aster,row;
    
    printf("Enter the size of the tree:");
    scanf("%d",&size_of_tree);
    flushall();
    
    //loop to print the pyramid series
    for(row=1;row<=size_of_tree;row++)
    {
        //loop to print the spaces in every row
        for(space=size_of_tree-row;space>0;space--)
        {
            printf(" ");
        }//end inner for
        
        
        //loop to print the stars in every row
        for(aster=1;aster<=(row*2)-1;aster++)
        {
            printf("*");
        }//end inner for
        
        printf("\n");
    }//end outer for
    
    //loop to prin the single star at the end
    for(space=size_of_tree-1;space>0;space--)
    {
        printf(" ");
        if(space==1)
        {
            printf("*\n");
        }//end if
    }//end for
    
    getchar();
}