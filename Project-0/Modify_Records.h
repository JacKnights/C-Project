#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
int *studentID;
char *studentName[30];
int *studentClass;
int *studentGrade;
int student;
void Modify_Records() {
	int modify, i;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("Input a student's ID to modify his record, or 0 to quit.\n");
	scanf("%d", &modify);
	while (modify) {
		for (i = 0; i < student; i++) {
			if (*(studentID + i) == modify) {
				printf("Now input the new record as following:\n");
				printf("    a string for name, a number for class, a number for grade.\n");
				scanf("%s %d %d", studentName + i, studentClass + i, studentGrade + i);
				break;
			}
		}
		scanf("%d", &modify);
	}
	printf("Modification completed.\n");
}
