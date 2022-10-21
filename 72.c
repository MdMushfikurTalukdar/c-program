 #include <stdio.h>


int main()
{
    int a[100],b[100],i,j,n=15,c=0 ;

    printf("Enter the numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

  for(i=0; i<n; i++)
    {
        c=1;
        if(a[i]!=-1)
		{
		    for(j=i+1; j<n; j++)

            {
        	   if(a[i]==a[j])
        	    {
			       c++;
			       a[j]=-1;
		       }
	       }
	       b[i]=c;
		}



    }


printf("\nThe frequencies of the numbers are : ");
 for(i=0; i<n; i++)
    {
         if(a[i]!=-1)
        {
        	printf("%d ",b[i]);

		}

    }
    return 0;
}
