#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define sec 15.0
void delay()
{
clock_t ti = sec * CLOCKS_PER_SEC;
clock_t start = clock();
while((clock() - start) < ti);
}
int main()
{
    delay();
    return 0;
}
