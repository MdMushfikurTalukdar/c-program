#include<stdio.h>

int main()
{
    int i,n;
    int fac,facto;
    double factorial=1;

    while(n!=4)
    {
        printf("\n\t\t\t1. Factorial of a number. \n\t\t\t2. Prime or not \n\t\t\t3. GCD \n\t\t\t4. Exit\n\nPlease, choose your option : ");
        scanf("%d",&n);

    switch(n)
    {
        case 1 :
            printf("\nEnter any number to make factorial : ");
            scanf("%d",&facto);
            for(i=1; i<=facto; i++)
            {
                factorial *= i;
            }
            printf("\nYour factorial of %d is = %.2lf",facto,factorial);

            factorial=1;
            break;

        case 2 :
            printf("\nEnter any number to check prime or not : ");
            scanf("%d",&facto);
            for(i=2; i<facto; i++)
            {

                if(facto%i==0)
                {
                    printf("\nThe number is not prime number.");
                    break;
                }
                else
                {
                    printf("\nThe number is prime number.");
                    break;
                }
            }
            break;

        case 3 :
            printf("\nEnter two number for GCD : ");
            scanf("%d%d",&facto,&fac);
            while(facto!=fac)
                {
                    if(facto > fac)
                    {
                        facto -= fac;
                    }

                    else
                    {
                        fac -= facto;
                    }

                    }
            printf("Your \"GCD\" is = %d",facto);
            break;

        case 4 :
            printf("\nProgram closed.");
            break;

        default:
            printf("\nYour choose is not exist.");

    }

    }

    return 0;
}
