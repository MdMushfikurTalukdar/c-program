#include<stdio.h>

int main()
{
    int i,numb;
    char str[10000];

    printf("Enter string 1 : ");
    gets(str);

    printf("\nEnter number of characters : ");
    scanf("%d",&numb);

    printf("\nString 2 is : ");
    for(i=0; i<numb; i++)
    {
        printf("%c",str[i]);
    }




    return 0;
}
