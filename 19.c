#include<stdio.h>

int fun1(int a, int b, int c)
{
    int sum = a+ b+ c;

    return sum;
}

int fun2(int a, int b, int c)
{
    if(fun1(a,b,c)==0)
    {
        printf("\nPROXYCITY");
    }
    else if(fun1(a,b,c)==1)
    {
        printf("\nP.Y.N.G");
    }
    else if(fun1(a,b,c)==2)
    {
        printf("\nDNSUEYI");
    }
    else if(fun1(a,b,c)==3)
    {
        printf("\nSERVERS");
    }
    else if(fun1(a,b,c)==4)
    {
        printf("\nHOSTI");
    }
    else if(fun1(a,b,c)==5)
    {
        printf("\nCRIPTONIXE");
    }
    else if(fun1(a,b,c)==6)
    {
        printf("\nOFFLINEDAY");
    }
    else if(fun1(a,b,c)==7)
    {
        printf("\nSALT");
    }
    else if(fun1(a,b,c)==8)
    {
        printf("\nANSWERI");
    }
    else if(fun1(a,b,c)==9)
    {
        printf("\nRAR?");
    }
    else if(fun1(a,b,c)==10)
    {
        printf("\nWIFI ANTENNAS");
    }
    else
    {
        printf("\nError");
    }
}

int main()
{
    int a,b,c;

    printf("\nEnter three number under 0 to 5 : ");
    scanf("%d%d%d",&a,&b,&c);

    fun2(a,b,c);


    return 0;
}
