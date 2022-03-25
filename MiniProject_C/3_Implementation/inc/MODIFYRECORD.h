/**@file MODIFYRECORD.h
 *@brief The modifyrecord function will be used to modify the existing record
 *
 *In this MODIFYRECORD.h the data will be modifyed using modifyrecord function
 *the function will take different types parameters for modifing the record 
 *after entering all the data then the data will be modified.
 *
 *@bug No know bugs.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

FILE *fp, *ft;

// Function to modify the record
void modifyrecord()
{
	system("cls");
	char empname[50];
	char another = 'y';

	while (another == 'y') {
		printf("\nEnter employee name"
			" to modify : ");
		scanf("%s", empname);

		rewind(fp);

		// While File is open
		while (fread(&e, size, 1, fp) == 1) {
			// Compare the employee name
			// with ename
			if (strcmp(e.name, empname) == 0) {
				printf("\nEnter new name:");
				scanf("%s", e.name);              //@param e.name will take the input name.
				printf("\nEnter new age :");
				scanf("%d", &e.age);              //@param e.age will take the input age.
				printf("\nEnter new salary :");
				scanf("%f", &e.fee);              //@param e.fee will take the input fee.
				printf("\nEnter new EMP-ID :");
				scanf("%d", &e.id);               //@param e.id will take the input id

				fseek(fp, -size, SEEK_CUR);
				fwrite(&e, size, 1, fp);
				break;
			}
		}

		// Ask for modifying another record
		printf("\nWant to modify another"
			" record (Y/N) :");
		fflush(stdin);
		scanf("%c", &another);                  //@param another will take input y (or) n.
	}
}
