#include<stdio.h>

int main()
{
    int num, sum= 0, last,first=0;

    printf("Enter four digit number : ");
    scanf("%d",&num);
    last = num%10;
    first = num/1000;
    sum = first+last;
    if(first>9)
    {
        printf("\nYour number is more than four digit.");
    }
    else if(first==0)
    {
        printf("\nYour number is lass than four digit.");
    }

    else
    {
        printf("\nThe sum of the first and last digit is : %d",sum);
    }


    return 0;
}
