#include<stdio.h>
#include<math.h>

int cheakPrime(int number)
{
  int count = 0;

  for(int i=2; i<=number/2; i++)
  {
     if(number%i == 0)
     {
       count=1;
       break;
     }
  }

  if(number == 1) count = 1;

  return count;
}

int main()
{
  int number ,count1;

  printf("Enter a number: ");
  scanf("%d",&number);

  count1 = cheakPrime(number);
  if(count1 == 0)
  printf("The number is prime .", number);
  else
  printf("The numebr is not prime.", number);

  return 0;
}
