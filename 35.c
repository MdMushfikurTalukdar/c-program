#include<stdio.h>

struct student
{
    char name[100];
    int id;
    int marks;
}st[100],mar[100];

void (struct student st[])
{

}

int main()
{
    int i,n,j,k,sum[100];

    printf("Enter total student you want to store : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Student %d : ",i+1);
        printf("Name : ");
        gets(st[i].name);
        printf("ID : ");
        scanf("%d",&st[i].id);
        for(j=0; j<3; j++)
        {
            printf("Subject %d marks : ",j+1);
            for(k=0; k<4; k++)
            {
                scanf("%d",&st[k].marks);
                sum[j] += st[k].marks;
            }
        }

    }

    return 0;
}
