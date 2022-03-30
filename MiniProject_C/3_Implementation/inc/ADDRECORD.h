/**@file ADDRECORD.h
 *@brief It contains functions to add a record.
 *
 * The ADDRECORD.h file contains the function to add the record
 * of the student in the file. It contains different types of
 * parameters as input.It will eventually any macros, constants,
 * or global variables you will need.
 * @bug No known bugs.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*#include <windows.h>*/

/* Here we define the data structure Struct for considering */
/* few parameters for the student record */
struct stu {
	char name[50];     /*@param name is character array to store name of student.*/
	float fee;         /*@param fee is for the fees of the student.*/
	int age;           /*@param age tells us the age of the student.*/
	int id;            /*@param id will be used as the reference of the student.*/
};


FILE *fp, *ft;     /*Here we declared the variable for the file.*/

struct stu e;      /*@brief The e variable is defined for the struct name stu.
                    * To access all the variables in the Sturcture.*/ 

long int size = sizeof(e);  /* It defines as the size of the structure*/

/* Function to add the records*/
int addrecord()
{
	system("cls");
	fseek(fp, 0, SEEK_END);
	char another = 'y';

	while (another == 'y') {               /* In the loop*/ 
		printf("\nEnter Name : ");      
		scanf("%s", e.name);               /*@param It will take student name as input.*/

		printf("\nEnter Age : ");
		scanf("%d", &e.age);               /*@param It will take student age as input.*/

		printf("\nEnter Fee : ");
		scanf("%f", &e.fee);               /*@param It will take student fee as input.*/

		printf("\nEnter COLLEGE-ID : ");
		scanf("%d", &e.id);                /*@param It will take student id as input.*/

		fwrite(&e, size, 1, fp);           /*@brief fwrite function will write the parameters that  
                                            *are given as input into the file using file pointer fp.*/

		printf("\nWant to add another"
			" record (Y/N) : ");
		fflush(stdin);                      

		scanf("%c", &another);             /*It will take the parameter.*/
	}
return 1;
}
