#include<stdio.h>
#include<string.h>

int main()
{
    char string[1000];
    char words[100][100], small[100], large[100],temp;
    int i = 0, j = 0, k, length, m;

    printf("Enter your String : ");
    gets(string);

    for(k=0; string[k]!='\0'; k++)
    {
        if(string[k] != ' ' && string[k] != '\0')
        {
            words[i][j++] = string[k];
        }
        else
        {
            words[i][j] = '\0';
            i++;
            j = 0;
        }
    }

    length = i + 1;


    strcpy(small, words[0]);
    strcpy(large, words[0]);


    for(k = 0; k < length; k++)
    {
        if(strlen(small) > strlen(words[k]))
            {
                strcpy(small, words[k]);
            }

        if(strlen(large) < strlen(words[k]))
            strcpy(large, words[k]);
    }


    printf("The largest word is \'%s\' and the smallest word is \'%s\'. ", large,small);

    return 0;
}
