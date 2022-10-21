#include <stdio.h>

struct Software
{
    char Software_name[1000];
    double Version;
    double Installation_file_size_in_MB;
    char Purpose[1000];
    double Price;
    int Customer_ratings[3];
    double Average_rating[3];
};

int main()
{
    int i,j,m,k;
    double sum=0;
    struct Software name;
    struct Software version;
    struct Software mb;
    struct Software purpose;
    struct Software prise;
    struct Software rati;
    struct Software avg;

    for(j=0; j<3; j++)
    {
        printf("Enter Software name : ");
        gets(name.Software_name);
        printf("\nEnter Version : ");
        scanf("%lf",&version.Version);
        printf("\nEnter Installation file size in MB : ");
        scanf("%lf",&mb.Installation_file_size_in_MB);
        printf("\nEnter Purpose name : ");
        scanf("%s",&purpose.Purpose);
        printf("\nEnter Prise : ");
        scanf("%lf",&prise.Price);
        printf("\nEnter \'3\' customers Rating randomly : ");

        avg.Average_rating = 0;
        for(i=0; i<3; i++)
        {
            scanf("%d",&rati.Customer_ratings[i]);
            
			avg.Average_rating[j] += rati.Customer_ratings[i];
			 
        }

        getchar();

    }
    
    for(k=0; k<3; k++)
    {
    	printf("\n%s : %.1lf\n\n",name.Software_name,avg.Average_rating[k]/3);
	}


	


    return 0;
}
