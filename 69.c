#include <stdio.h>

int main()
{
    int n,i,arr[100],sum=0;

    printf("How many numbers? ");
    scanf("%d",&n);

    printf("\nEnter the numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            sum += arr[i];
        }

    }
    printf("\nThe sum of even numbers is : %d",sum);


    return 0;
}
