#include<stdio.h>
#include<math.h>

int fun(int size)
{

    if(size == 1)
    {
         return 1;
    }

    else if(size!=1)
    {
        return pow(2,(size-1)) + fun(size-1);
    }
    else
    {
        return size;
    }
}

int main()
{
    int n,t;

    printf("Enter any number : ");
    scanf("%d",&n);

    t=fun(n);

    printf("\nYour sum is : %d",t);


    return 0;
}
