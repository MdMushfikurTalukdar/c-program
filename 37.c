#include <stdio.h>

int main()
{
    int i,count=0,shift,count_2;
    char str[1000];

    printf("Enter a string : ");
    gets(str);
    printf("\nEnter a number want to shift : ");
    scanf("%d",&shift);
    printf("\nYour string is : ");
    for(i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    count_2 = count - shift;
    for(i=shift; i<count; i++)
    {
        printf("%c",str[i]);

    }

    for(i=0; i<count_2; i++)
    {
        printf("%c",str[i]);

    }

    return 0;
}
