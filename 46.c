#include<stdio.h>

int main()
{
    int i,num,sum=0;

    for(;;)
    {
        printf("\nEnter any number to add : ");
        scanf("%d",&num);
        if(num==0)
        {
            break;
        }
        else
        {
            sum += num;
            printf("\nYour current sum is : %d",sum);
        }
    }
    printf("\nYour total sum is : %d",sum);


    return 0;
}
