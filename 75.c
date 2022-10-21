#include <stdio.h>

int main()
{
    int i,j,c=4;
    int arr[5] ={1,3,5,7,9};

    for(i=0; i<4; i++)
    {
        c--;
        for(j=0; j<4-i; j++)
        {
            printf(" ");

        }
        for(j=0; j<4-c; j++)
        {
            printf("%d",arr[j]);

        }
        printf("\n");


    }


    return 0;
}
