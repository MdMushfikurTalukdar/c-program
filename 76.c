#include<stdio.h>

int main()
{
    int n,i,j;

    printf("Enter an odd number : ");
    scanf("%d",&n);
    for(;;)
    {
        if(n%2==0)
        {
            printf("Enter an odd number : ");
            scanf("%d",&n);
        }
        else
        {
            break;
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==0 || j==n-1 || i==n/2)
            {
                printf("H");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }



    return 0;
}
