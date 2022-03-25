/**@file DELETERECORD.h
 *@brief The deleterecord function is used to delete Student data
 *
 *The DELETERECORD.h file had the deleterecord function which is used 
 *to delete the record of the student using file handling and different
 *types of functions as remove and many more and the updated data will
 *be avaliable at the same binary file data.txt.
 *
 */ 

/* include the studio header flie*/
#include <stdio.h>

/* include the standard library header flie*/
#include <stdlib.h>

/* include the string header flie*/
#include <string.h>

/* include the windows header flie*/
#include <windows.h>                 //To perform the windows operations


FILE *fp, *ft;                       //File pointers to access the files


// Function to delete the records
void deleterecord()
{
	system("cls");
	char empname[50];
	char another = 'y';

	while (another == 'y') {
		printf("\nEnter student "
			"name to delete : ");
		scanf("%s", empname);         //@param empname will be used as reference to the deleting record.

		ft = fopen("temp.txt", "wb"); /*@brief fopen function is used to open the files in the requried file
                                       *file format which will be access using the file pointer.*/ 
		rewind(fp);

		while (fread(&e, size,
					1, fp)
			== 1) {
			if (strcmp(e.name,
					empname)            //Here it will compare the original name with the given input.
				!= 0)
				fwrite(&e, size, 1, ft);//Here it will write in the file using fwrite function. 
		}

		fclose(fp);                   
		fclose(ft);                     //File will be closed.

		remove("data.txt");             //It will remove the file

		rename("temp.txt", "data.txt"); //it will add the temp file to the data file.

		fp = fopen("data.txt", "rb+");  /*@brief The file will be opened using fopen function with the file 
                                         * with the file pointer fp in binary mode rb+.*/ 

		printf("\nWant to delete another"
			" record (Y/N) :");
		fflush(stdin);                  //stdin will be flushed.
		another = getche();
	}
}