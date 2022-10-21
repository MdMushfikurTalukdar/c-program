#include<stdio.h>

int main ()
{
    int i,n,c=0;

    printf("Enter Total number : ");
    scanf("%d",&n);

    printf("Your Even number is : ");
    for(i=1; i<=n; i++)
    {


        if(i%2==0)
        {
        printf("%d",i);
        c++;
        if(c<(n/2))
        {
            printf(",");

        }
        }

    }


    return 0;
}
