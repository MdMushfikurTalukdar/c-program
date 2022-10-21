#include <stdio.h>
#include<math.h>

struct Func
{
    double r;
    double theta;

};

int main()
{
    struct Func co;

    double total,pi;
    pi = 3.1416;

    printf("Enter the value of \'r\' : ");
    scanf("%lf",&co.r);

    printf("Enter the value of \'theta\' : ");
    scanf("%lf",&co.theta);

    total = sqrt(co.r*co.r + co.theta*co.theta);

    co.theta = atan(co.theta/co.r);
    co.theta = 180.0 * co.theta/ pi;

    printf("Theta = %0.2lf in degree", co.theta);


    return 0;
}
