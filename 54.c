#include<stdio.h>

int main()
{
    int i,j=0,count=0,m;
    char str[1000],temp[1000];

    printf("Please Enter your string : ");
    gets(str);

    printf("\nYour string is : ");
    for(i=0; str[i]!='\0'; i++)
    {
        printf("%c",str[i]);
        count++;
    }

    printf("\nYour reverse string is : ");
    for(m=count-1; m>0; m--)
    {

        temp[j] = str[m];
        j++;
    }

    for(i=0; i<count; i++)
    {
        printf("%c",temp[i]);
    }

    printf("\nYour Upper string is : ");
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    for(i=0; i<count; i++)
    {
        printf("%c",str[i]);
    }
    printf("\nYour Lower string is : ");
    for(i=0; str[i]!='\0'; i++)
        {
      if(str[i]>=65 && str[i]<=90)
         str[i] = str[i]+32;
   }
   for(i=0; i<count; i++)
    {
        printf("%c",str[i]);
    }

    printf("\nThe length of the string is : %d",count);


    return 0;
}
