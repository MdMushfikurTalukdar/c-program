#include<stdio.h>

double getArea(int a, int b, int h)
{
    double area;
    area = 0.5*(a+b)*h;
    return area;
}

int main()
{
    int a,b,h;
    printf("Enter the value of \'a\' and \'b\' and \'h\' randomly : ");
    scanf("%d%d%d",&a,&b,&h);

    printf("\nThe Area is : %.2lf",getArea(a,b,h));
    return 0;
}
