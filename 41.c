#include<stdio.h>

int main()
{
    int i,j,n,one,two;

    printf("Please, Enter a number : ");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        one = 1;
        two = 2;
        for(j=0; j<i; j=j+2)
        {
            if(i%2==0)
            {
                printf("%d",two);
                two += 2;

            }
            else
            {
                printf("%d",one);
                one += 2;

            }

        }
        printf("\n");
    }


    return 0;
}
