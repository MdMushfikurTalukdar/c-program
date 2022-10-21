#include <stdio.h>

int main()
{
    int n,matrix[100][100],i,j,sum=0;

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

    printf("\nEnter your element randomly : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i%2!=0 || j%2!=0)
            {
                sum += matrix[i][j];
            }
        }
    }


    printf("\n%d",sum);

    return 0;
}
