#include<stdio.h>

struct Employee
{
    char Name[1000];
    int join_date;
    int join_month;
    int join_year;
    int start_date;
    int start_month;
    int start_year;
    int Salary;
};


int main()
{
    int i,j,day[10],tk;
    struct Employee member[5];

    for(i=0; i<4; i++)
    {
        printf("\nName : ");
        gets(member[i].Name);
        printf("\nD.O.B : ");
        scanf("%d%d%d",&member[i].join_date,&member[i].join_month,&member[i].join_year);
        printf("\nStarting date : ");
        scanf("%d%d%d",&member[i].start_date,&member[i].start_month,&member[i].start_year);
        printf("\nSalary : ");
        scanf("%d",&member[i].Salary);
        getchar();

    }
    printf("\nInfo of employee with highest salary : ");
    tk = member[0].Salary;
    for(i=1; i<4; i++)
    {
        if(tk<member[i].Salary)
        {
            tk = member[i].Salary;
        }
    }
    for(i=0; i<4; i++)
    {
        if(tk==member[i].Salary)
        {
            tk = i;
            break;
        }
    }

    printf("\nName : ");
    for(i=0; member[tk].Name[i]!='\0'; i++)
    {
        printf("%c",member[tk].Name[i]);
    }
    printf("\nD.O.B : %d/%d/%d",member[tk].join_date,member[tk].join_month,member[tk].join_year);
    printf("\nStarting date : %d/%d/%d",member[tk].start_date,member[tk].start_month,member[tk].start_year);
    printf("\nSalary : %d",member[tk].Salary);

    printf("\n\n\nThe most Resent Employee is : ");
    for(i=0; i<4; i++)
    {
        day[i] = (member[i].start_year*365)+(member[i].start_month*30)+member[i].start_date;
    }

    day[5] = day[0];
    for(i=0; i<4; i++)
    {
        if(day[5]<day[i])
        {
            day[5] = day[i];

        }

    }
    for(i=0; i<4; i++)
    {
        if(day[5]==day[i])
        {
            day[6] = i;
        }

    }

    printf("\nName : ");
    for(i=0; member[day[6]].Name[i]!='\0'; i++)
    {
        printf("%c",member[day[6]].Name[i]);
    }
    printf("\nD.O.B : %d/%d/%d",member[day[6]].join_date,member[day[6]].join_month,member[day[6]].join_year);
    printf("\nStarting date : %d/%d/%d",member[day[6]].start_date,member[day[6]].start_month,member[day[6]].start_year);
    printf("\nSalary : %d",member[day[6]].Salary);



    return 0;
}
