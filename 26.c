#include<stdio.h>

int main()
{
    FILE *f;
    int i,count=0,count1=0;
    char ch;

    f = fopen("D:\\13-5-2021\\test.txt","r");

    if(f=='\0')
    {
        printf("Error");
        exit(1);
    }

    printf("The content of the file test.txt are : \n");
    for(i=0; ch!= EOF; i++)
    {
        ch = fgetc(f);
        putchar(ch);
        if(ch=='\n' || ch==' ' || ch=='\0' || ch==EOF)
        {
            count++;
        }
        else
        {
            count1++;
        }
    }

    fclose(f);

    printf("\nThe number of words in the file test.txt are : %d",count);
    printf("\nThe number of characters in the file test.txt are : %d",count1);

    return 0;
}
