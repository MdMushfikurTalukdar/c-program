#include <stdio.h>

int Power(int x,int y)
{
    double result=1;
    if(y==0)
    {
        return result;
    }

    result=x*(Power(x,y-1));
}

int main()
{
    int b,pwr;
    double result;

    printf("Input the base  value : ");
    scanf("%d",&b);

    printf("Input the value of power : ");
    scanf("%d",&pwr);

    result = Power(b,pwr);

    printf("The value is : %.0lf",result);

    return 0;
}
