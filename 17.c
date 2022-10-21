#include<stdio.h>

int mystrlen(char s[])
{
    int i;

    for(i=0; s[i]!='\0'; i++);

    return i;
}

void mystrrev(char s[])
{
    int i,j=0;
    char s2[1000],temp;

    for(i=mystrlen(s)-1; i>=0; i--)
    {
        s2[j]=s[i];
        j++;
    }
    for(i=0; i<mystrlen(s); i++)
    {
        s[i]= s2[i];
    }
}

int main()
{
    int i;
    char str[1000];

    printf("Enter a string : ");
    gets(str);

    mystrrev(str);

    printf("%d",mystrlen(str));

    printf("\n%s",str);


    return 0;
}
