#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
int *studentID;
char *studentName[30];
int *studentClass;
int *studentGrade;
int student;
void Delete_Records() {
	char way = 'a';
	int delID, i, j, flag = 1;
	char delName[30];
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	printf("Input a to delete a student's record by ID, c to quit deleting.\n");
	scanf("%c", &way);
	while(way != 'c') {
		switch(way) {
			case 'a':{
				scanf("%d", &delID);
				for (i = 0; i < student; i++) {
					if (*(studentID + i) == delID) {
						*(studentID + i) = -1;
						break;
					}
				}
				if (i == 10000) {
					printf("No such ID!\n");
				}
				break;
			}
		}
		scanf("%c", &way);
	}
	printf("Records deleting completed.\n");
}
