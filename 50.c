#include<stdio.h>

int main()
{
    int i,arr[5];

    printf("Enter values : ");

    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);

    }

    printf("\nCombined integer number : ");
    for(i=0; i<5; i++)
    {
        printf("%d",arr[i]);

    }



    return 0;
}
