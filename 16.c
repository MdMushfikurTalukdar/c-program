#include<stdio.h>

int calc_power(int x, int y)
{
    int i,result=1;

    for(i=0; i<y; i++)
    {
        result = result*x;
    }

    return result;
}

int main()
{
    int x,y;

    printf("Enter any number as \'x\' and \'y\' randomly : ");
    scanf("%d%d",&x,&y);


    if(x<0)
    {
        printf("\nError");
    }

    else
    {
        printf("\nThe result is : %d",calc_power(x,y));
    }


    return 0;
}
