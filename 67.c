#include<stdio.h>

int main()
{
    int i;
    int count_1=0;
    char input[1000];

    printf("Your Language is \"Doesn't start and end with same character\".");
    printf("\n\nEnter your string : ");
    gets(input);

    for(i=0; input[i]!='\0'; i++)
    {
        count_1++;
    }

    if(input[0]==input[count_1-1])
    {
        printf("\nThe string was Rejected.");
    }
    else
    {
        printf("\nThe string was Accepted.");
    }


    return 0;
}
