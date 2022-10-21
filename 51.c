#include<stdio.h>

int main()
{
    int i,number,arr[100],j,count=0;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&number);

    printf("\nInput %d elements in the array : ",number);
    for(i=0; i<number; i++)
    {
        printf("\nelement - %d : ",i);
        scanf("%d",&arr[i]);

    }
    for(i=0; i<number; i++)
    {
        for(j=1; j<number; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                printf("\nTotal number of duplicate elements found in the array is : %d",i);
                break;
            }
        }
        if(count>0)
        {
            break;
        }
    }

    return 0;
}
