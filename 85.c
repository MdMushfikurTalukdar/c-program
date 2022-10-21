#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M=2,N=3,MXN[100][100];
    int i,j;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {

            scanf("%d",&MXN[j][i]);
        }

    }

    printf("raw 1->(max among %d %d %d ) \n",MXN[0][0],MXN[1][1],MXN[2][2]);

    printf("raw 2->(max among %d %d %d )",MXN[0][0],MXN[1][1],MXN[2][0]);

}
