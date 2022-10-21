#include<stdio.h>

struct compl
{
    int real;
    int image;

};

int main()
{
    struct compl one,im;

    printf("Enter \"number 1\" real number : ");
    scanf("%d",&one.real);
    printf("Enter \"number 1\" image number without \"i\" : ");
    scanf("%d",&one.image);
    printf("Enter \"number 2\" real number : ");
    scanf("%d",&im.real);
    printf("Enter \"number 2\" image number without \"i\" : ");
    scanf("%d",&im.image);

    printf("\n%d + %di",(one.real+im.real),(one.image+im.image));

    return 0;
}
