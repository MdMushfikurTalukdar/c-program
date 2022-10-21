#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Please Enter first number : ");
    scanf("%d",&num1);

    printf("\nPlease Enter second number : ");
    scanf("%d",&num2);

    printf("\nFirst number is: ");
    if(num1<0)
    {
        printf("Negative ");
        if(num1%2==0)
        {
            printf("and even.");
        }
        else
        {
            printf("and odd.");
        }
    }

    else
    {
        printf("Positive ");
        if(num1%2==0)
        {
            printf("and even.");
        }
        else
        {
            printf("and odd.");
        }
    }

    printf("\nSecond number is: ");
    if(num2<0)
    {
        printf("Negative ");
        if(num2%2==0)
        {
            printf("and even.");
        }
        else
        {
            printf("and odd.");
        }
    }

    else
    {
        printf("Positive ");
        if(num2%2==0)
        {
            printf("and even.");
        }
        else
        {
            printf("and odd.");
        }
    }



    return 0;
}
