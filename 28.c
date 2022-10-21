#include<stdio.h>

int main()
{
    int i,j,r1,c1,r2,c2,count=0;
    int matrix1[100][100],matrix2[100][100];

    printf("\nInput Row number and Column number of the 1st matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("\nInput Row number and Column number of the 2nd matrix : ");
    scanf("%d%d",&r2,&c2);

    if(r1!=r2 || c1!=c2)
    {
        printf("\nTwo matrices are not equal");
    }

    else
    {
        printf("\nInput elements in the first matrix : ");
        for(i=0; i<c1; i++)
        {
            for(j=0; j<r1; j++)
            {
                printf("\nElement - [%d][%d] : ",i,j);
                scanf("%d",&matrix1[i][j]);
            }
        }

        printf("\nInput elements in the second matrix : ");
        for(i=0; i<c2; i++)
        {
            for(j=0; j<r2; j++)
            {
                printf("\nElement - [%d][%d] : ",i,j);
                scanf("%d",&matrix2[i][j]);
            }
        }

        for(i=0; i<c2; i++)
        {
            for(j=0; j<r2; j++)
            {
                if(matrix1[i][j]==matrix2[i][j])
                {
                    count++;
                }
            }
        }
        if(count==c2*r2)
        {
            printf("\nTwo matrices are equal.");
        }
        else
        {
            printf("\nTwo matrices are not equal.");
        }

    }

    return 0;
}
