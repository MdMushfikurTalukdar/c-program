#include<stdio.h>

int main()
{
    int i,number,arr[100],j,insert,input,count=0, temp,temp_2;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&number);

    printf("\nInput %d elements in the array : ",(number-1));
    for(i=0; i<number-1; i++)
    {
        printf("\nelement - %d : ",i);
        scanf("%d",&arr[i]);

    }
    printf("\nInput the position where to insert : ");
    scanf("%d",&insert);
    printf("\nInput the number to insert : ");
    scanf("%d",&input);

    for(i=0; i<number; i++)
    {
        if((i-1)==insert)
        {
            temp = arr[i];
            arr[i] = input;
            count++;
        }
        else if(count>0)
        {
            temp_2 = arr[i];
            arr[i] = temp;
            temp = temp_2;
        }
    }

    printf("\nThe new list is : ");
    for(i=0; i<number; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
