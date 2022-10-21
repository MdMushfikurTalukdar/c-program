#include<stdio.h>

int main()
{
    int i,n;
    double div,sum=0,count_1=1,count_2=2;

    printf("Enter any number that will run up to \"n\" term : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {

        div = (count_1/count_2);
        if(i%2==0)
        {
            sum += div;
        }
        else
        {
            sum -= div;
        }
        count_1++;
        count_2++;
    }
    printf("\nThe sum of the series is : %.3lf",sum);


    return 0;
}
