#include<stdio.h>

struct length
{
    int feet;
    int inches;

};

int main()
{
    int count=0;
    struct length first,second,non;

    printf("Enter first one's feet and inches randomly : ");
    scanf("%d%d",&first.feet,&first.inches);

    printf("Enter second one's feet and inches randomly : ");
    scanf("%d%d",&second.feet,&second.inches);

    non.inches = first.inches + second.inches;
    if(non.inches>=12)
    {
        if(non.inches>=12)
        {
            non.inches = non.inches-12;
            count++;
        }

    }

    non.feet = first.feet+ second.feet + count;

    printf("\n%d feet %d inches.",non.feet,non.inches);



    return 0;
}
