#include<stdio.h>
#include<string.h>

int main()
{
	int ctr=0,i,count=0;
    int t,h,e,spc;
	char string[1000];

	printf("Input the string : ");
	gets(string);

    ctr=strlen(string);

	for(i=0;i<=ctr-3;i++)
	{
		t=(string[i]=='t' || string[i]=='T');
		h=(string[i+1]=='h' || string[i+1]=='H');
		e=(string[i+2]=='e' || string[i+2]=='E');
		spc=(string[i+3]==' ' || string[i+3]=='\0');
		if ((t && h && e && spc)==1)
        count++;
	}
	printf("\nThe frequency of the word \"the\" is : %d",count);
}
