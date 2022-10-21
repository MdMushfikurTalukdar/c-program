#include<stdio.h>

int main()
{

    int i, j, a, n, number[100];
    printf("Enter the amount of number : ");
    scanf("%d", &n);

    printf("\nEnter the numbers : ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (number[i]>number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }

        }

    }

    printf("\nAscending oder is : ");
    for (i=0; i<n; i++)
    printf("%d ",number[i]);

    return 0;

}
