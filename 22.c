#include<stdio.h>

struct S_info
{
    char Title[50];
    char Singer_Name[20];
    int month,day,year;
    int Rating;
};

void all_title(struct S_info song[], int size)
{
    int i,count1=0;

    for(i=0; i<size; i++)
    {
        count1++;
        printf("\n%d. %s",count1,song[i].Title);
    }

}

void new_song(struct S_info song[], int size)
{
    int i;

    for(i=size+1; i<size+4; i++)
    {
        getchar();
        printf("\nEnter title name of song : ");
        gets(song[i].Title);
        printf("\nEnter Singer's name : ");
        gets(song[i].Singer_Name);
        printf("\nEnter Release date as month, day and year : ");
        scanf("%d%d%d",&song[i].month,&song[i].day,&song[i].year);
        printf("\nEnter Rating : ");
        scanf("%d",&song[i].Rating);
    }

}


void delet(struct S_info song[], int size)
{
    int i,j,count2=0;
    char str[100],de[10]="deleted";

    gets(str);

    for(i=0; i<size; i++)
    {
        if(str==song[i].Title)
        {
            for(j=0; de[j]!='\0'; j++)
            {
                song[i].Title[j]=de[j];
            }
            for(j=0; de[j]!='\0'; j++)
            {
                song[i].Singer_Name[j]=de[j];
            }
            song[i].month=0;
            song[i].day=0;
            song[i].year=0;
            song[i].Rating=0;
            count2++;
        }
    }
    if(count2==0)
    {
        printf("\nThe title of the song is not found.");
    }
    else
    {
        printf("\nDeleted successfully.");
    }

}

int main()
{
    int i,number;
    struct S_info song[1000];

    printf("Enter total Number of song you want to store : ");
    scanf("%d",&number);

    for(i=0; i<number; i++)
    {
        getchar();
        printf("\nEnter title name of song : ");
        gets(song[i].Title);
        printf("\nEnter Singer's name : ");
        gets(song[i].Singer_Name);
        printf("\nEnter Release date as month, day and year : ");
        scanf("%d%d%d",&song[i].month,&song[i].day,&song[i].year);
        printf("\nEnter Rating : ");
        scanf("%d",&song[i].Rating);

    }

    printf("\nAll the songs title...");
    all_title(song,number);

    printf("\nTo enter \'3\' new song enter those information : ");
    new_song(song,number);

    getchar();
    printf("\nEnter title Name to delete the song : ");
    delet(song,number);



    return 0;
}
