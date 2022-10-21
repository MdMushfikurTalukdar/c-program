#include<stdio.h>

int main()
{
    int count1 = 0, count2 = 0, i, j, count3=0;
    char str1[1000], str2[10];

    printf("Enter a string : ");
    gets(str1);
    printf("Enter substring : ");
    gets(str2);

    for(i=0; str1[i]!='\0'; i++)
    {
        count1++;
    }
    for(i=0; str2[i]!='\0'; i++)
    {
        count2++;
    }
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            count3 = 1;
            if (str1[j] != str2[j - i])
            {
                count3 = 0;
                break;
            }
        }
        if (count3 == 1)
            break;
    }
    if (count3 == 1)
    {
        printf("SEARCH SUCCESSFUL");
    }

    else
    {
        printf("SEARCH UNSUCCESSFUL");

    }

    return 0;
}
