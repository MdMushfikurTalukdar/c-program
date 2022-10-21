#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[50];
	int id;
	char dept[20];
	double cgpa;
}student;

void saveByDept(char *fileName, char *deptName , student allStudents[], int size)
{

	FILE *fp;

	int i;

	fp = fopen(fileName, "w");

	for(i = 0; i < size; i++)
	{
		if(strcmp(deptName, allStudents[i].dept) == 0)
		{
			fprintf(fp, "%s %d %s %lf\n", allStudents[i].name, allStudents[i].id, allStudents[i].dept, allStudents[i].cgpa);

		}
	}
	fclose(fp);

}


int main()
{
	student allStudents[50];

	char fileName[100];

	char deptName[100];

	int n,i;

	printf("Enter the total number of students: ");
	scanf("%d", &n);


	for(i = 0; i<n; i++)
	{

		printf("\nStudent %d details : ", i+1);

		printf("\nStudent name : ");
		scanf("%s", allStudents[i].name);

		printf("\nStudent id : ");
		scanf("%d", &allStudents[i].id);

		printf("\nDepartment : ");
		scanf("%s", allStudents[i].dept);

		printf("\ncgpa : ");
		scanf("%lf", &allStudents[i].cgpa);
	}


	printf("\nFilename : ");
	scanf("%s", fileName);


	printf("\nDepartment name : ");
	scanf("%s", deptName);


	saveByDept(fileName, deptName , allStudents, n);

	printf("\nDepartment wise data stored in file.");

	return 0;
}
