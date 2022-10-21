#include <stdio.h>

void concat_str(char str1[], char str2[])
{
    int i,count1=0,count2=0;

    for(i=0; str1[i]!='\0'; i++)
    {
        count1++;
    }
    for(i=0; str2[i]!='\0'; i++)
    {
        count2++;
    }

    for(i=0; i<10; i++)
    {
        printf("%c",str1[i]);
    }
    for(i=count2-10; i<count2; i++)
    {
        printf("%c",str2[i]);
    }

}

int main()
{
    char str1[100],str2[100];

    printf("\nInput the first String : ");
    gets(str1);
    printf("\nInput the second String : ");
    gets(str2);

    printf("\n");

    concat_str(str1,str2);


    return 0;
}
