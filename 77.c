#include<stdio.h>

int main()
{
    int i,j;
    int stud_1[5], stud_2[5], stud_3[5], stud_4[5], stud_5[5];
    int sum_1=0, sum_2=0, sum_3=0, sum_4=0, sum_5=0;

    printf("Enter student 1 marks : ");
    for(i=0; i<4; i++)
    {
        scanf("%d",&stud_1[i]);
        sum_1 += stud_1[i];

    }
    printf("\nEnter student 2 marks : ");
    for(i=0; i<4; i++)
    {
        scanf("%d",&stud_2[i]);
        sum_2 += stud_2[i];

    }
    printf("\nEnter student 3 marks : ");
    for(i=0; i<4; i++)
    {
        scanf("%d",&stud_3[i]);
        sum_3 += stud_3[i];

    }
    printf("\nEnter student 4 marks : ");
    for(i=0; i<4; i++)
    {
        scanf("%d",&stud_4[i]);
        sum_4 += stud_4[i];

    }
    printf("\nEnter student 5 marks : ");
    for(i=0; i<4; i++)
    {
        scanf("%d",&stud_5[i]);
        sum_5 += stud_5[i];

    }

    printf("\nTotal marks of student 1 : %d",sum_1);
    printf("\nTotal marks of student 2 : %d",sum_2);
    printf("\nTotal marks of student 3 : %d",sum_3);
    printf("\nTotal marks of student 4 : %d",sum_4);
    printf("\nTotal marks of student 5 : %d",sum_5);

    int arra[5]={sum_1, sum_2, sum_3, sum_4, sum_5};
    int count_1=sum_1, count_2=sum_1, count_3=0, count_4=0;

    for(i=1; i<5; i++)
    {
        if(count_1<arra[i])
        {
            count_1 = arra[i];
        }
        if(count_2>arra[i])
        {
            count_2 = arra[i];
        }
    }

    for(i=0; i<5; i++)
    {
        count_3++;
        if(count_2==arra[i])
        {
            break;
        }
    }
    for(i=0; i<5; i++)
    {
        count_4++;
        if(count_1==arra[i])
        {
            break;
        }
    }

    printf("\nStudent with lowest total marks : %d",count_3);
    printf("\nStudent with highest attendance : %d",count_4);



    return 0;
}
