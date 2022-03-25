/*@file main.c
 *@brief In this file the main code resides for the mangement
 *
 * In this flie main.c it will include all the different types
 * of header files like addrecord.h, deleterecord.h, dispalyrecord.h
 * modifyrecord.h all these header file will be included for accessing
 * the functions in the header files.It will dispaly the output in the
 * window promt knows the .exe(Executable file). It will use the windows.h
 * header file to access the windows functions for the .exe file.It will 
 * different type functions like gotoxy and COORD varibles,etc.
 * After the execution of this file done, it will generate the .exe file
 * in that .exe the output will be present.
 *
 *@bug No know bugs.
 *
 */
#include "ADDRECORD.h"
#include "DELETERECORD.h"
#include "DISPLAYRECORD.h"
#include "MODIFYRECORD.h"


// Structure of the employee

// size of the structure


// In the start coordinates
// will be 0, 0
COORD cord = { 0, 0 };    //@param cord will hold the coordinates of x and y starting at 0,0.

// function to set the
// coordinates
void gotoxy(int x, int y)     //gotoxy functions will be used set the coordinates using x and y as parameters.                              
{
	cord.X = x;               //@param x will have x coordinates.
    cord.Y = y;               //@param y will have y coordinates.
	SetConsoleCursorPosition(               
		GetStdHandle(STD_OUTPUT_HANDLE),  
		cord);                               
}
/**@brief Sets the cursor position in the specified console screen buffer.
* using standard output handle at specified coordinates using cord                                             
* variable. */

FILE *fp, *ft;


// Driver code
int main()
{
	int choice;                      //@param choice varable is used to store the choice.

	// opening the file
	fp = fopen("data.txt", "rb+");

	// showing error if file is
	// unable to open.
	if (fp == NULL) {
		fp = fopen("data.txt", "wb+");
		if (fp == NULL) {
			printf("\nCannot open file...");
			exit(1);                         //Exit status.
		}
	}

	system("Color 0F");                      //It is used to dispaly the color 
	printf("\n\n\n\n\t\t\t\t============="
		"============================="
		"===========");
	printf("\n\t\t\t\t~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~");
	printf("\n\t\t\t\t==================="
		"============================="
		"=====");
	printf("\n\t\t\t\t[|:::>:::>:::>::> "
		"STUDENT RECORD <::<:::<:::"
		"<:::|]\t");
	printf("\n\t\t\t\t==================="
		"============================="
		"=====");
	printf("\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~");
	printf("\n\t\t\t\t====================="
		"==============================\n");
	printf("\n\n\n\t\t\t\t");

	system("pause");

	while (1) {
		// Clearing console and asking the
		// user for input
		system("cls");
		gotoxy(30, 10);
		printf("\n1. ADD RECORD\n");
		gotoxy(30, 12);
		printf("\n2. DELETE RECORD\n");
		gotoxy(30, 14);
		printf("\n3. DISPLAY RECORDS\n");
		gotoxy(30, 16);
		printf("\n4. MODIFY RECORD\n");
		gotoxy(30, 18);
		printf("\n5. EXIT\n");
		gotoxy(30, 20);
		printf("\nENTER YOUR CHOICE...\n");
		fflush(stdin);
		scanf("%d", &choice);              //@param choice will take the input 

		// Switch Case
		switch (choice) {
		case 1:

			// Add the records
			addrecord();
			break;

		case 2:

			// Delete the records
			deleterecord();
			break;

		case 3:

			// Display the records
			displayrecord();
			break;

		case 4:

			// Modify the records
			modifyrecord();
			break;

		case 5:
			fclose(fp);
			exit(0);
			break;

		default:
			printf("\nINVALID CHOICE...\n");
		}
	}

	return 0;            //@return It will return integer.
}
