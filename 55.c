#include<stdio.h>

int main()
{
    int arr[1000],ar[1000];
    int n,i,delet,count=0,count1=1;

    printf("Enter The element number of the array : ");
    scanf("%d",&n);

    printf("\nEnter your element randomly : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter your number you want to delete : ");
    scanf("%d",&delet);


    printf("\n\nAfter Deleting of the array.\nYour array is : ");
    for(i=0; i<n; i++)
    {
        if(delet==arr[i])
        {
            ar[i]=arr[count1];
            count++;
        }
        else if(count>0)
        {
            ar[i]= arr[count1];
        }

        else
        {
            ar[i]= arr[i];
        }
        count1++;
    }
    for(i=0; i<n-1; i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}
