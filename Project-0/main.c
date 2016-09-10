#include<stdio.h>
#include<windows.h>
#include"welcome.h"
#include"Append_Records.h"
#include"Delete_Records.h"
#include"Modify_Records.h"
#include"Querying_Records.h"
int *studentID;
char *studentName[30];
int *studentClass;
int *studentGrade;
int student;
int main() {
	int service; //service is the number of a operation.
	welcome(); //print when opened
	scanf("%d", &service); //input demand
	while (service != 0) {
		if (service < 5 && service >= 0) {
			switch(service) {
				case 0: break;
				case 1: Append_Records();break;
				case 2: Delete_Records();break;
				case 3: Modify_Records();break;
				case 4: Querying_Records();break;
			}
			scanf("%d", &service);
		} else {
			printf("Sorry, the service you demand doesn't exist.\n");
			//when input wrong characters
			scanf("%d", &service);
		}
	}
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY);
	printf("Program ends.");
	return 0;
}
