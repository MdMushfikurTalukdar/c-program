#include <stdio.h>
struct Person
{
   char name[50];
   int age;
};
int main()
{
    struct Person mem[2], non[2];
    FILE *fptr;
    int i,sum = 0, avg;

    fptr = fopen("records.txt","wb");
    for(i=0; i<2; i++)
    {
        fflush(stdin);
        printf("Enter name : ");
        gets(mem[i].name);

        printf("Enter age : ");
        scanf("%d", &mem[i].age);
    }

    fwrite(mem, sizeof(mem), 1, fptr);
    fclose(fptr);

    fptr = fopen("records.txt", "rb");
    fread(non, sizeof(non), 1, fptr);
    printf("\n\n\n");

    for(i=0; i<2; i++)
    {
        printf("Name: %s\nAge : %d\n", non[i].name, non[i].age);
        sum += non[i].age ;
    }
    avg = sum/2 ;

    printf("Average is : %d",avg);

    fclose(fptr);

}
