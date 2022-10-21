#include <stdio.h>

int main()
{
    char str[100];
    int *ptr;
    int i;



    printf("Enter string : ");
    gets(str);

    ptr = &str[0];

    for(i=0; str[i]!='\0'; i++)
    {
        printf("%c\n",ptr);
        ptr++;
    }

    return 0;
}
