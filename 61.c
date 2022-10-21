#include<stdio.h>

int main()
{
    int i;
    char string[1000];

    printf("Input the string : ");
    gets(string);

    printf("\nAfter removing the Output String : ");
    for(i=0; string[i]!='\0'; i++)
    {
        if(string[i]>='a' && string[i]<='z'||string[i]>='A' && string[i]<='Z')
        {
            printf("%c",string[i]);
        }
    }


    return 0;
}
