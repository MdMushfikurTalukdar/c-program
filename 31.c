#include<stdio.h>

int num1=0,num2,count=1,sum=0;

int recursion(int n)
{

    if(count<=2)
    {
        num2 = count;
        num2 = num2*num2;
    }

    num1 = num2 + num1;
    num2 = num1 - num2;
    sum += num1*num1;
    printf("%d^2 ",num1);
    count++;

    if(n==1)
    {
        return 1;
    }

    else
    {

        return recursion(n-1);
    }

}

int main()
{
    int i,n;

    printf("Enter a number  up to \'n\' series : ");
    scanf("%d",&n);

    printf("\nThe series is : ");
    recursion(n);


    printf("\nThe sum of the series is : %d",sum);

    return 0;
}
