#include<stdio.h>

int main()
{
    int i,n,m,count1=0,count2=0,dis=0;

    printf("Enter two twins prime number : ");
    scanf("%d%d",&n,&m);

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            count1++;
        }

    }
    for(i=2; i<m; i++)
    {
        if(m%i==0)
        {
            count2++;
        }

    }
    dis= m-n;
    if(count1==0 && count2==0 && dis==2)
    {
        printf("Twin primes");
        printf("\n\nExplanation : \nBoth primes, and their difference is 2");
    }
    else if(count1==0 && count2!=0)
    {
        printf("Not twin primes");
        printf("\n\nExplanation : \n%d is not a prime number",m);
    }
    else if(count1!=0 && count2==0)
    {
        printf("Not twin primes");
        printf("\n\nExplanation : \n%d is not a prime number",n);
    }
    else if(count1!=0 && count2!=0)
    {
        printf("Not twin primes");
        printf("\n\nExplanation : \nNeither is a prime number");
    }
    else if(count1==0 && count2==0 && dis!=2)
    {
        printf("Not twin primes");
        printf("\n\nExplanation : \nDifference is %d",dis);
    }
    else
    {
        printf("Not twin primes");
    }


    return 0;
}
