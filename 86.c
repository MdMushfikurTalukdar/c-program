#include<stdio.h>

int main()
{
    int i,age,pri=0,hi=0,uni=0;

    for(i=0; i<5; i++)
    {
        printf("Enter your age : ");
        scanf("%d",&age);

        if(age>=5 && age<=10)
        {
            pri++;
        }
        else if(age>=11 && age<=16)
        {
            hi++;
        }
        else if(age>=17 && age<=23)
        {
            uni++;
        }
    }
    printf("\nPrimary School Student : %d ",pri);
    printf("\nHigh School Student : %d ",hi);
    printf("\nUniversity Student : %d ",uni);

    return 0;
}
