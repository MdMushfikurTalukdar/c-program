#include <stdio.h>

int main()
{
    int n,i,count=0,arr[100],n2;

    printf("How many numbers? ");
    scanf("%d",&n);

    printf("\nEnter the numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }

    printf("\nEnter the search key : ");
    scanf("%d",&n2);

    for(i=0; i<n; i++)
    {
        if(n2==arr[i])
        {
            printf("\nFound at position %d",count);
            break;
        }
        count++;
        if(n==count)
        {
            printf("\nNOT FOUND");
            break;
        }

    }



    return 0;
}
