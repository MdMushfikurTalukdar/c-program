#include<stdio.h>

int length(char *s)
{
   int i;

   for(i=0; *s!= '\0'; i++)
   {
      s++;
   }
   return i;
}


int main()
{
   char str[100];
   int total;

   printf("\nEnter any string : ");
   gets(str);

   total = length(str);
   printf("The length is : %d",total);

   return 0;
}
