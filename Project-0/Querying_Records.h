#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
int *studentID;
char *studentName[30];
int *studentClass;
int *studentGrade;
int student;
void Querying_Records() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
	int query, i, j;
	printf("Input the ID of the student to check or 0 to quit:");
	scanf("%d", &query);
	while(query) {
		for (i = 0; i < student; i++) {
			if (*(studentID + i) == query) {
				printf("Class%d, Grade:%d\n", *(studentClass + i), *(studentGrade + i));
				break;
			}
		}
		scanf("%d", &query);
	}
	printf("Querying completed.\n");
}
