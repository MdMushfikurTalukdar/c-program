#include <stdio.h>

int main()
{
    int n,i,count=0;
    char arr[100];

    printf("How many alphabets? ");
    scanf("%d",&n);

    printf("\nEnter the alphabets : ");
    for(i=0; i<=n; i++)
    {
        scanf("%c",&arr[i]);
        if(arr[i]=='a' || arr[i]=='A' || arr[i]=='e' || arr[i]=='E' || arr[i]=='i' || arr[i]=='I' || arr[i]=='O' || arr[i]=='o' || arr[i]=='u' || arr[i]=='U')
        {
            count++;
        }

    }
    printf("\nThe numbers of vowels is : %d",count);


    return 0;
}
