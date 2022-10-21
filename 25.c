#include<stdio.h>

int main()
{
    FILE *f;
    int i,count=1;
    char ch;

    f = fopen("D:\\13-5-2021\\countlist.txt","r");

    if(f=='\0')
    {
        printf("Error");
        exit(1);
    }

    printf("The content of the file test.txt are\n");
    for(i=0; ch!= EOF; i++)
    {
        ch = fgetc(f);
        putchar(ch);
        if(ch=='\n')
        {
            count++;
        }
    }

    fclose(f);

    printf("\nThe lines in the file are : %d",count);

    return 0;
}
