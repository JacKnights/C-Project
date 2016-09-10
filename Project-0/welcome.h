#include <windows.h>
#include<stdio.h>
int student;
void welcome() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
	printf("+--------------------------------------+\n");
	printf("|Welcome to use student grading system!|\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("+--------------------------------------+\n");
	printf("|Input:1 to insert a grade record;     |\n");
	printf("|      2 to delete a Record;           |\n");
	printf("|      3 to modify the records;        |\n");
	printf("|      4 to query some students;       |\n");
	printf("|      0 to quit.                      |\n");
	printf("+--------------------------------------+\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
	printf(" First please input the student number:");
	scanf("%d", &student);
	printf(" Now, input your demand:");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
}
