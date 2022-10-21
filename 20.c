#include <stdio.h>

int max(int *p, int size)
{
    int i,arr[100];

    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    p=arr;
    for(i=1; i<size; i++)
    {
        if(*p < *(p+i))
        {
            *p = *(p+i);
        }
    }
    return *p;
}
int main()
{
    int size,arr[100],*p;
    int result;

    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("\nEnter number randomly : ");



    result = max(p,size);

    printf("\nThe maximum number is : %d",result);

    return 0;
}
