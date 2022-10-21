#include <stdio.h>

int main()
{
    int m,n,matrix[100][100],temp,i,j;

    printf("Enter the matrix as \'m\' and \'n\' : ");
    scanf("%d%d",&m,&n);

    printf("\nEnter your element randomly : \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    temp = matrix[0][0];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(temp<matrix[i][j])
            {
                temp = matrix[i][j];
            }
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(temp==matrix[i][j])
            {
                printf("\nLocation : [%d][%d]",i,j);
                break;
            }
        }
    }


    return 0;
}
