/* Using different sorting algorithms in C to perform
-searches
-copying data
-finding data
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, tempID, compare,j,check,searchCheck,error=0;
    int high,low,mid,index=-1;
    char tempS[20],tempF[15],tempstat[15],tempC[8],search[25];
    
    struct course
    {
        char first_name[15];
        char surname[21];
        char status[15];
        char course[15];
        int ID;
    };
    
    //DT265A - part-time Higher Diploma
    //----------------------------------------------------------------------------------
    struct course DT265A[13];
    
    //student 1
    strcpy(DT265A[0].first_name,"Tawny");
    strcpy(DT265A[0].surname,"Oiler");
    
    //student 2
    strcpy(DT265A[1].first_name,"Emanuel");
    strcpy(DT265A[1].surname,"Manseau");
    
    //student 3
    strcpy(DT265A[2].first_name,"Chauncey");
    strcpy(DT265A[2].surname,"Aker");
    
    //student 4
    strcpy(DT265A[3].first_name,"Porsha");
    strcpy(DT265A[3].surname,"Dungan");
    
    //student 5
    strcpy(DT265A[4].first_name,"Candis");
    strcpy(DT265A[4].surname,"Laporta");
    
    //student 6
    strcpy(DT265A[5].first_name,"Tifany");
    strcpy(DT265A[5].surname,"Madruga");
    
    //student 7
    strcpy(DT265A[6].first_name,"Janee");
    strcpy(DT265A[6].surname,"Kinch");
    
    //student 8
    strcpy(DT265A[7].first_name,"Eboni");
    strcpy(DT265A[7].surname,"Cypher");
    
    //student  9
    strcpy(DT265A[8].first_name,"Adelaida");
    strcpy(DT265A[8].surname,"Mui");
    
    //student 10
    strcpy(DT265A[9].first_name,"Malik");
    strcpy(DT265A[9].surname,"Linde");
    
    //student 11
    strcpy(DT265A[10].first_name,"Kent");
    strcpy(DT265A[10].surname,"Chichester");
    
    //student 12
    strcpy(DT265A[11].first_name,"Venus");
    strcpy(DT265A[11].surname,"Alldredge");
    
    //student 13
    strcpy(DT265A[12].first_name,"Jerilyn");
    strcpy(DT265A[12].surname,"Raymer");
    
    //defining id
    for(i=0;i<13;i++)
    {
        DT265A[i].ID = i+1;
    }
    
    
    //defining course code
    for(i=0;i<13;i++)
    {
        strcpy(DT265A[i].course,"DT265A");
    }
    
    
    //defining status
    for(i=0;i<13;i++)
    {
        strcpy(DT265A[i].status,"Part-Time");
    }
    
    printf("\n\nStudents in DT265A - part-time Higher Diploma\n\n");
    for(i=0;i<13;i++)
    {
        printf("%d   %s     %s     %s     %s\n",DT265A[i].ID,DT265A[i].course,DT265A[i].status,DT265A[i].first_name,DT265A[i].surname);
    }
    //----------------------------------------------------------------------------------
    
    
    //DT265C - part-time Master's Qualifier
    //----------------------------------------------------------------------------------
    struct course DT265C[9];

    //student 1
    strcpy(DT265C[0].first_name,"Rickie");
    strcpy(DT265C[0].surname,"Hulen");
    
    //student 2
    strcpy(DT265C[1].first_name,"Art");
    strcpy(DT265C[1].surname,"Tabarez");
    
    //student 3
    strcpy(DT265C[2].first_name,"Ronda");
    strcpy(DT265C[2].surname,"Cirillo");
    
    //student 4
    strcpy(DT265C[3].first_name,"Jacalyn");
    strcpy(DT265C[3].surname,"Moloney");
    
    //student 5
    strcpy(DT265C[4].first_name,"Darius");
    strcpy(DT265C[4].surname,"Bernier");
    
    //student 6
    strcpy(DT265C[5].first_name,"Denita");
    strcpy(DT265C[5].surname,"Ingold");
    
    //student 7
    strcpy(DT265C[6].first_name,"Bailey");
    strcpy(DT265C[6].surname,"Brunette");
    
    //student 8
    strcpy(DT265C[7].first_name,"Tamiko");
    strcpy(DT265C[7].surname,"Hippler");
    
    //student  9
    strcpy(DT265C[8].first_name,"Nydia");
    strcpy(DT265C[8].surname,"Roeser");
    
    //defining id
    for(i=0;i<9;i++)
    {
        DT265C[i].ID = 14+i;
    }
    
    
    //defining course code
    for(i=0;i<9;i++)
    {
        strcpy(DT265C[i].course,"DT265C");
    }
    
    
    //defining status
    for(i=0;i<9;i++)
    {
        strcpy(DT265C[i].status,"Part-Time");
    }
    
    printf("\n\nStudents in DT265C - part-time Master's Qualifier\n\n");
    for(i=0;i<9;i++)
    {
        printf("%d   %s     %s     %s     %s\n",DT265C[i].ID,DT265C[i].course,DT265C[i].status,DT265C[i].first_name,DT265C[i].surname);
    }
    //----------------------------------------------------------------------------------
    
    
    //DT265B - full-time Master's Qualifier
    //----------------------------------------------------------------------------------
    struct course DT265B[14];
    
    //student 1
    strcpy(DT265B[0].first_name,"Antonio");
    strcpy(DT265B[0].surname,"Latimore");
    
    //student 2
    strcpy(DT265B[1].first_name,"Tomas");
    strcpy(DT265B[1].surname,"Sepulveda");
    
    //student 3
    strcpy(DT265B[2].first_name,"Hana");
    strcpy(DT265B[2].surname,"Addington");
    
    //student 4
    strcpy(DT265B[3].first_name,"Ursula");
    strcpy(DT265B[3].surname,"Leandro");
    
    //student 5
    strcpy(DT265B[4].first_name,"Denice");
    strcpy(DT265B[4].surname,"Lattimore");
    
    //student 6
    strcpy(DT265B[5].first_name,"Jean");
    strcpy(DT265B[5].surname,"Chivers");
    
    //student 7
    strcpy(DT265B[6].first_name,"Ariel");
    strcpy(DT265B[6].surname,"Allin");
    
    //student 8
    strcpy(DT265B[7].first_name,"Skye");
    strcpy(DT265B[7].surname,"Dawkins");
    
    //student  9
    strcpy(DT265B[8].first_name,"Sherly");
    strcpy(DT265B[8].surname,"Colyer");
    
    //student 10
    strcpy(DT265B[9].first_name,"Janee");
    strcpy(DT265B[9].surname,"Thibert");
    
    //student 11
    strcpy(DT265B[10].first_name,"Jessie");
    strcpy(DT265B[10].surname,"Garst");
    
    //student 12
    strcpy(DT265B[11].first_name,"Kate");
    strcpy(DT265B[11].surname,"Meuser");
    
    //student 13
    strcpy(DT265B[12].first_name,"Tracy");
    strcpy(DT265B[12].surname,"Reigle");
    
    //student 14
    strcpy(DT265B[13].first_name,"Audie");
    strcpy(DT265B[13].surname,"Amell");
    
    //defining id
    for(i=0;i<14;i++)
    {
        DT265B[i].ID = 23+i;
    }
    
    
    //defining course code
    for(i=0;i<14;i++)
    {
        strcpy(DT265B[i].course,"DT265B");
    }
    
    
    //defining status
    for(i=0;i<14;i++)
    {
        strcpy(DT265B[i].status,"Full-Time");
    }
    
    
    
    printf("\n\nStudents in DT265B - full-time Master's Qualifier\n\n");
    for(i=0;i<14;i++)
    {
        printf("%d   %s     %s     %s     %s\n",DT265B[i].ID,DT265B[i].course,DT265B[i].status,DT265B[i].first_name,DT265B[i].surname);
    }
    //----------------------------------------------------------------------------------
    
    
    //DT8900 - full-time International Master's Qualifier
    //----------------------------------------------------------------------------------
    struct course DT8900[6];
    
    //student 1
    strcpy(DT8900[0].first_name,"Shaun");
    strcpy(DT8900[0].surname,"Sinha");
    
    //student 2
    strcpy(DT8900[1].first_name,"Serita");
    strcpy(DT8900[1].surname,"Bicknell");
    
    //student 3
    strcpy(DT8900[2].first_name,"Dagny");
    strcpy(DT8900[2].surname,"Schlicher");
    
    //student 4
    strcpy(DT8900[3].first_name,"Judie");
    strcpy(DT8900[3].surname,"Kopp");
    
    //student 5
    strcpy(DT8900[4].first_name,"Aracely");
    strcpy(DT8900[4].surname,"Pylant");
    
    //student 6
    strcpy(DT8900[5].first_name,"Dario");
    strcpy(DT8900[5].surname,"Hacker");
    
    //defining id
    for(i=0;i<6;i++)
    {
        DT8900[i].ID = 37+i;
    }
    
    
    //defining course code
    for(i=0;i<6;i++)
    {
        strcpy(DT8900[i].course,"DT8900");
    }
    
    
    //defining status
    for(i=0;i<6;i++)
    {
        strcpy(DT8900[i].status,"Full-Time");
    }
    
    printf("\n\nStudents in DT8900 - full-time International Master's Qualifier\n\n");
    for(i=0;i<6;i++)
    {
        printf("%d   %s     %s     %s     %s\n",DT8900[i].ID,DT8900[i].course,DT8900[i].status,DT8900[i].first_name,DT8900[i].surname);
    }
    //----------------------------------------------------------------------------------
    
    
    //PART 1
    //----------------------------------------------------------------------------------
    struct course AllStudents[43];
    
    // copying all the names into a main list
    for(i=0;i<42;i++)
    {
        if(i<13)
        {
            strcpy(AllStudents[i].first_name,DT265A[i].first_name);
            strcpy(AllStudents[i].surname,DT265A[i].surname);
            strcpy(AllStudents[i].status,DT265A[i].status);
            strcpy(AllStudents[i].course,DT265A[i].course);
            AllStudents[i].ID = DT265A[i].ID;
        }//end if 
        
        if(i>12 && i<22)
        {
            strcpy(AllStudents[i].first_name,DT265C[i-13].first_name);
            strcpy(AllStudents[i].surname,DT265C[i-13].surname);
            strcpy(AllStudents[i].status,DT265C[i-13].status);
            strcpy(AllStudents[i].course,DT265C[i-13].course);
            AllStudents[i].ID = DT265C[i-13].ID;
        }//end if 
        
        if(i>21 && i<36)
        {
            strcpy(AllStudents[i].first_name,DT265B[i-22].first_name);
            strcpy(AllStudents[i].surname,DT265B[i-22].surname);
            strcpy(AllStudents[i].status,DT265B[i-22].status);
            strcpy(AllStudents[i].course,DT265B[i-22].course);
            AllStudents[i].ID = DT265B[i-22].ID;
        }//end if 
        
        if(i>35)
        {
            strcpy(AllStudents[i].first_name,DT8900[i-36].first_name);
            strcpy(AllStudents[i].surname,DT8900[i-36].surname);
            strcpy(AllStudents[i].status,DT8900[i-36].status);
            strcpy(AllStudents[i].course,DT8900[i-36].course);
            AllStudents[i].ID = DT8900[i-36].ID;
        }//end if 
        
    }//end for
    
    //sorting the names in Ascending order usig binary insertion sort
    for(i=1;i<42;i++)
    {                
        strcpy(tempS,AllStudents[i].surname);
        strcpy(tempF,AllStudents[i].first_name);
        strcpy(tempstat,AllStudents[i].status);
        strcpy(tempC,AllStudents[i].course);
        tempID=AllStudents[i].ID;
        
        high=i,low=0;
        while(low <= high)
        {
            mid = (low + high)/2;
            compare = strcmp(tempS,AllStudents[mid].surname);
            if(compare<0)
            {
                high = mid -1;
                index = mid;
            }//end if 
            else if(compare>0)
            {
                low = mid +1;
            }//end else if 
            else if(compare == 0)
            {
                index = mid;
                break;
            }//end else if 
        }//end while
        
        for(j = i;j>index;j--)
        {
            strcpy(AllStudents[j].surname,AllStudents[j-1].surname);
            strcpy(AllStudents[j].first_name,AllStudents[j-1].first_name);
            strcpy(AllStudents[j].course,AllStudents[j-1].course);
            strcpy(AllStudents[j].status,AllStudents[j-1].status);
            AllStudents[j].ID = AllStudents[j-1].ID;
        }//end for
        
        strcpy(AllStudents[j].surname,tempS);
        strcpy(AllStudents[j].first_name,tempF);
        strcpy(AllStudents[j].course,tempC);
        strcpy(AllStudents[j].status,tempstat);
        AllStudents[j].ID = tempID;
    }//end for
    
    
    
    
    printf("\n\n                All Students\n");
    printf("ID     Status        Name           Surname\n\n");
    for(i=0;i<42;i++)
    {
        if(AllStudents[i].ID<10)
        {
            printf("%d      %s     %s     %s          %s\n",AllStudents[i].ID,AllStudents[i].course,AllStudents[i].status,AllStudents[i].first_name,AllStudents[i].surname);
        }//end if 
        else
        {
            printf("%d     %s     %s     %s          %s\n",AllStudents[i].ID,AllStudents[i].course,AllStudents[i].status,AllStudents[i].first_name,AllStudents[i].surname);
        }//end else
    }//end for 
    
    
    //----------------------------------------------------------------------------------
    
    
    //PART 2 - Find all Full-Time Students
    //----------------------------------------------------------------------------------
    printf("\n\n\n\nPART 2 - All Full-Time Students\n\n");
    for(i=0;i<42;i++)
    {
        check = strcmp(AllStudents[i].status,"Full-Time");
        if(check == 0)
        {
             //this if statement was added just to make it look better while the program was running
            if(AllStudents[i].ID<10)
            {
                printf("%d      %s     %s     %s          %s\n",AllStudents[i].ID,AllStudents[i].course,AllStudents[i].status,AllStudents[i].first_name,AllStudents[i].surname);
            }//end if 
            else
            {
                printf("%d     %s     %s     %s          %s\n",AllStudents[i].ID,AllStudents[i].course,AllStudents[i].status,AllStudents[i].first_name,AllStudents[i].surname);
            }//end else
        }//end if 
    }//end for
    
    //----------------------------------------------------------------------------------
    
    
    //PART 3 - Finding Student By Surname
    //----------------------------------------------------------------------------------
    printf("\n\n\n Type the Student's Surname:");    
    gets(search);
    for(i=0;i<42;i++)
    {
        searchCheck = strcmp(AllStudents[i].surname,search);
        if(searchCheck == 0)
        {
            printf("%d      %s     %s     %s          %s\n",AllStudents[i].ID,AllStudents[i].course,AllStudents[i].status,AllStudents[i].first_name,AllStudents[i].surname);
        }//end if 
        else
        {
            error++;
        }//end else
    }//end for
    if(error==42)
    {
        printf("\n\nNo Match Found\n");
    }//end if 
    //----------------------------------------------------------------------------------
    
    
    getchar();
    return 0;
}