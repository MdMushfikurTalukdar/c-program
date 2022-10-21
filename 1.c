#include <stdio.h>

void printArrayReverse(int* arr, int size)
{
    int *arrEnd = (arr + size - 1);
    while(arr <= arrEnd)
    {
        printf("%d ", *arr);
        arr++;
    }
}

int main()
{
    int arr[100];
    int size;
    int *left = arr;
    int *right;

    printf("Enter size of array: ");
    scanf("%d", &size);

    right = &arr[size - 1];

    printf("Enter elements in array: ");
    while(left <= right)
    {
        scanf("%d", left++);
    }
    left = arr;

    while(left < right)
    {
        *left    ^= *right;
        *right   ^= *left;
        *left    ^= *right;

        left++;
        right--;
    }


    printf("\nArray after reverse: ");
    printArrayReverse(arr, size);


    return 0;
}
