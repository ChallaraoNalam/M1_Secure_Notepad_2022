#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct stu {
	char name[50];
	float fee;
	int age;
	int id;
};

FILE *fp, *ft;

struct stu e;

long int size = sizeof(e);

// Function to add the records
void addrecord()
{
	system("cls");
	fseek(fp, 0, SEEK_END);
	char another = 'y';

	while (another == 'y') {
		printf("\nEnter Name : ");
		scanf("%s", e.name);

		printf("\nEnter Age : ");
		scanf("%d", &e.age);

		printf("\nEnter Fee : ");
		scanf("%f", &e.fee);

		printf("\nEnter COLLEGE-ID : ");
		scanf("%d", &e.id);

		fwrite(&e, size, 1, fp);

		printf("\nWant to add another"
			" record (Y/N) : ");
		fflush(stdin);

		scanf("%c", &another);
	}
}
