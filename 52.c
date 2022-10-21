#include<stdio.h>

int main()
{
    int i,number,arr[100],j,delet;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&number);

    printf("\nInput %d elements in the array : ",number);
    for(i=0; i<number; i++)
    {
        printf("\nelement - %d : ",i);
        scanf("%d",&arr[i]);

    }
    printf("\nInput the position where to delete : ");
    scanf("%d",&delet);
    printf("\nThe new list is : ");
    for(i=0; i<number; i++)
    {
        if((i+1)!=delet)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
