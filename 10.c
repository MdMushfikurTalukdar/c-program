//Write a c program that will find even or odd number without modulo operator "%"
#include<stdio.h>

int main()
{
    int input,stor1,stor2,result;

    printf("Enter a number : ");
    scanf("%d",&input);
    stor1 = input/2;
    stor2 = stor1*2;
    result = input - stor2;

    if(result == 0)
    {
        printf("\nEven");
    }
    else
    {
        printf("\nOdd");
    }


    return 0;
}
