#include <stdio.h>

void printArray(int* arr, int size)
{
    int i;

    for (i=0; i<4; i++)
    {
        printf("\n%d\t %p\t %d",i,(arr+i),*(arr+i));
    }
}

int main()
{
   int *arr;
   int size[4] = {3,8,5,7};
   arr = size;

   printf("\nIndex\t Address\t Value");
   printArray(arr,size);

   return 0;
}
