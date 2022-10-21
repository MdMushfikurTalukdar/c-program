#include<stdio.h>

int main()
{
    int i;

    for(i=200; i>=100; i--)
    {
        if(i%8==0)
        {
            printf("%d ",i);
        }
    }


    return 0;
}
