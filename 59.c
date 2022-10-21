#include<stdio.h>

int vowels(char array[])
{
    int i,count=0;

    for(i=0; array[i]!='\0'; i++)
    {
        if(array[i]=='A'||array[i]=='a'||array[i]=='E'||array[i]=='e'||array[i]=='I'||array[i]=='i'||array[i]=='O'||array[i]=='o'||array[i]=='U'||array[i]=='u')
        {
            count++;
        }
    }

    return count;

}

int main()
{
    int total;
    char array[1000];

    printf("Enter any string to count vowels : ");
    gets(array);

    total = vowels(array);

    printf("\nTotal vowels of the string : %d",total);

    return 0;
}
