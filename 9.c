#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int * ptr = arr, non;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter elements in array:\n");
    for (i = 0; i <n; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }

    ptr = arr;

    printf("\nMinimum value of the array is : ");
    ptr = arr[0];
    for (i=i; i<n; i++)
    {
        if(*ptr<arr[i])
        {
            *ptr = arr[i];
        }
    }

    *ptr = arr[0];
    for (i=i; i<n; i++)
    {
        if(*ptr>arr[i])
        {
            *ptr = arr[i];
        }
    }
    printf("%d and address is : %d", *ptr,ptr);
    printf("\nMaximum value of the array is : %d and address is : %d",*ptr,ptr);

    return 0;
}
