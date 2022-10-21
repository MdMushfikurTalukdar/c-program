#include<stdio.h>

int main()
{
    int p,q,r;
    int matrix1[50][50],matrix2[50][50],matrix3[50][50];
    int i,j,m,sum=0;

    printf("Enter any integer as p,q and r : ");
    scanf("%d%d%d",&p,&q,&r);

    printf("\nEnter your first matrix randomly.\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }

    }

    printf("\nEnter your second matrix randomly.\n");
    for(i=0; i<q; i++)
    {
        for(j=0; j<r; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }

    }

    for(i=0; i<p; i++)
    {
        for(j=0; j<r; j++)
        {
            for(m=0; m<q; m++)
            {
                sum = sum + matrix1[i][m] * matrix2[m][j];

            }
            matrix3[i][j] = sum;
            sum = 0;

        }

    }

    printf("\nHere is your result of Multiplication of Matrix.\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d ",matrix3[i][j]);

        }
        printf("\n");

    }


    return 0;

}
