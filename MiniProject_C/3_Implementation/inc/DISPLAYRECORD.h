/**@file DISPLAYRECORD.h
 *@brief In this the displayrecord function will dispaly the detalis
 *
 * In this DISPLAYRECORD.h file is used to display the record of the students
 * the displayrecord() function will display the detalis of the student using 
 * structure variable
 *@bug No know bugs.
 *
 */ 
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*#include <windows.h>*/

FILE *fp, *ft;

/* Function to display the record*/
int displayrecord()
{
	system("cls");

	// sets pointer to start
	// of the file
	rewind(fp);

	printf("\n========================="
		"==========================="
		"==================");
	printf("\nNAME\t\tAGE\t\tFEES\t\t"
		"\tID\n",
		e.name, e.age,
		e.fee, e.id);
	printf("==========================="
		"==========================="
		"================\n");

	while (fread(&e, size, 1, fp) == 1)      /*The fread function will read the content in the file*/
		printf("\n%s\t\t%d\t\t%.2f\t%10d",
			e.name, e.age, e.fee, e.id);     /**@param e.name will dispaly the name 
                                              *@param e.age will dispaly the age
                                              *@param e.fee will dispaly the fee
                                              *@param e.id will dispaly the id*/
	printf("\n\n\n\t");
	system("pause");
    return 1;
}
