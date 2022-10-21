#include <stdio.h>

void replaceAll(char arr[], char oldChar, char newChar)
{
    int i = 0;

    while(arr[i] != '\0')
    {
        if(arr[i] == oldChar)
        {
            arr[i] = newChar;
        }

        i++;
    }
}


int main()
{
    char arr[1000], oldChar, newChar;

    printf("Enter any string: ");
    gets(arr);

    printf("Enter character to replace: ");
    oldChar = getchar();

    getchar();

    printf("Enter character to replace \'%c\' with: ", oldChar);
    newChar = getchar();


    printf("\nString before replacing: \n%s", arr);

    replaceAll(arr, oldChar, newChar);

    printf("\n\nString after replacing \'%c\' with \'%c\' : \n%s", oldChar, newChar, arr);

    return 0;
}
