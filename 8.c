#include <stdio.h>

struct BirthCertificate
{
    int day, month, year;
    char name[100], fatherName[100], motherName[100];
};

int main()
{
    int i,c=0,day[5];
    struct BirthCertificate member[2];

    for(i=0; i<2; i++)
    {
        c++;
        printf("\nName of %d person : ",c);
        gets(member[i].name);
        printf("\nFather's name of %d person : ",c);
        gets(member[i].fatherName);
        printf("\nMother's name of %d person : ",c);
        gets(member[i].motherName);
        printf("\nEnter %d person Day month and year randomly : ",c);
        scanf("%d%d%d",&member[i].day,&member[i].month,&member[i].year);

        getchar();

    }

    for(i=0; i<2; i++)
    {
        day[i] = (member[i].year*365)+(member[i].month*30)+member[i].day;
    }
    if(day[0]<day[1])
    {
        printf("\nThe elder person is : ");
        printf("\nName : %s",member[1].name);
        printf("\nFather's Name : %s",member[1].fatherName);
        printf("\nMother's Name : %s",member[1].motherName);
    }
    else
    {
        printf("\nThe elder person is : ");
        printf("\nName : %s",member[1].name);
        printf("\nFather's Name : %s",member[1].fatherName);
        printf("\nMother's Name : %s",member[1].motherName);
    }


    return 0;
}
