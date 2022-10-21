#include <stdio.h>

void printFrequency(int n,int arr[], int freq[])
{

    int i, j, count;

    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

        freq[i] = -1;
    }


    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;

                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
}

int main()
{
    int arr[100], freq[100];
    int size, i, j, count;


    printf("Enter size of array: ");
    scanf("%d", &size);

    printFrequency(size,arr,freq);
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
