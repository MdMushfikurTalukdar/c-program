#include <stdio.h>

struct date
{
    int year,month,day;

}store[100];

int main()
{
    int i,sto1[100],sto2;

    for(i=0; i<5; i++)
    {
        printf("Enter %d number date : ",i+1);
        scanf("%d%d%d",&store[i].day,&store[i].month,&store[i].year);
    }

    for(i=0; i<5; i++)
    {
        printf("%d Date is : %d-%d-%d\n",i+1,store[i].day,store[i].month,store[i].year);
        sto1[i] = (store[i].year*365)+(store[i].month*30)+store[i].day;
    }

    sto2 = sto1[0];
    for(i=1; i<5; i++)
    {
        if(sto2<sto1[i])
        {
            sto2 = sto1[i];
        }
    }

    for(i=0; i<5; i++)
    {
        if(sto2==sto1[i])
        {
            printf("Oldest date is : %d-%d-%d\n",store[i].day,store[i].month,store[i].year);
            break;
        }
    }

    for(i=0; i<5; i++)
    {
        if(store[i].year%400 == 0)
        {
            printf("Leap year is : %d-%d-%d\n",store[i].day,store[i].month,store[i].year);
        }
        else if(store[i].year%4==0)
        {
            printf("Leap year is : %d-%d-%d\n",store[i].day,store[i].month,store[i].year);
        }
    }
    printf("\nEnter a month : ");
    scanf("%d",&store[5].month);

    if(store[5].month==1 || store[5].month==3 || store[5].month==5 || store[5].month==7 || store[5].month==8 || store[5].month==10 || store[5].month==12)
    {
        printf("The Dates of the months is : 31");
    }
    else
    {
        printf("The Dates of the months is : 30");
    }


    return 0;
}
