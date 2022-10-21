#include <stdio.h>

int main ()

{
    int i,n,j,m=0;
    int mix[10]= {1,2,3,4,5,6,7,8,9,0};

    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%d",mix[m]);
            m++;
            if(m==10)
            {
                m=0;
            }

        }
        printf("\n");

    }


    for(i=0; i<n; i++)
    {
        for(j=n; j>i; j--)
        {
            printf("%d",mix[m]);
            m++;
            if(m==10)
            {
                m=0;
            }
        }

        printf("\n");

    }




    return 0;
}
