#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int *studentID;
char *studentName[30];
int *studentClass;
int *studentGrade;
int student;
void Append_Records() {
	int stuNum, i;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
	printf("Please input a student's information as following:\n");
	printf("    a number for ID, a string for name, a number for class, a number for grade.\n");
	printf("Now please input the student number:");
	scanf("%d", &stuNum);
	studentID = (int *) malloc (sizeof(int) * stuNum);
	studentName[30] = (char *) malloc (sizeof(char ) * stuNum);
	studentClass = (int *) malloc (sizeof(int) * stuNum);
	studentGrade = (int *) malloc (sizeof(int) * stuNum);
	for (i = 0; i < stuNum; i++) {
		scanf("%d %s %d %d", studentID + i, studentName + i, studentClass + i, studentGrade + i);
	}
	printf("Records appended.\n");
}
