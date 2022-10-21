#include<stdio.h>

int main()
{
    int i,j,n,arr[100][100],sum=0;

    printf("\nEnter a number as n : ");
    scanf("%d",&n);

    printf("\nEnter element randomly : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("\nThe sum is : %d",sum);

    return 0;
}
