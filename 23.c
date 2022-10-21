#include<stdio.h>

struct Player
{
    char name[20];
    int age;
    char country[20];
    char position[20];
    double salary;
    double rating;
};

void highestPaidPlayer(struct Player *pl, int size)
{
    int i;
    struct Player array[100];

    pl=array;
    for(i=0; i<size; i++)
    {
        if(*pl < *(pl+i))
        {
            *pl = *(pl+i);
        }

    }

}

int main()
{
    int i,n,*pl;
    struct Player array[100];

    printf("\nEnter the size of array : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        getchar();
        printf("\nName : ");
        gets(array[i].name);
        printf("\nAge : ");
        scanf("%d",&array[i].age);
        getchar();
        printf("\nCountry : ");
        gets(array[i].country);
        printf("\nPosition : ");
        gets(array[i].position);
        printf("\nSalary : ");
        scanf("%lf",&array[i].salary);
        printf("\nRating : ");
        scanf("%lf",&array[i].rating);
    }


    highestPaidPlayer(pl,n);

    for(i=0; i<n; i++)
    {
        if(pl==array[i].salary)
        {
            break;
        }
    }
    printf("\nHighest paid player is : %s",array[i].name);


    return 0;
}
