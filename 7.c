#include<stdio.h>

int main()
{
    int n,i,j;

    printf("Enter an odd number as \'n\' : ");
    scanf("%d",&n);
    for(;;)
    {
        if(n%2==0)
        {
            printf("\nYou have enter an even number.");
            printf("\nPlease enter an odd number as \'n\' : ");
            scanf("%d",&n);

        }
        else
        {
            break;
        }
    }

    for(i=0; i<n/2; i++)
    {
        for(j=0; j<n/2-i; j++)
        {
            printf("_");
        }
        for(j=0; j<=i; j++)
        {
            if(j==0 || j==i)
            {
                printf("$");
            }
            else
            {
                printf("_");
            }
        }
        for(j=n/2+1; j<n-i; j++)
        {
            printf("_");
        }
        printf("\n");
    }


    return 0;
}
