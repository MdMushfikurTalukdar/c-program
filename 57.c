#include<stdio.h>

int main()
{
    int i;
    char string[100];

    printf("Enter any string : ");
    gets(string);

    printf("\nYour character of the string : ");
    for(i=0; string[i]!='\0'; i++)
    {
        printf("\n\t%c",string[i]);
    }

    return 0;
}
