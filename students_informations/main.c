#include <stdio.h>
#include <stdint.h>
#include <string.h>


//definition of a student record
typedef struct
{
	int id;
	char name[100];
	char branch[50];
	int dob;
	int semister;
}STUDENT_INFO_t;

//maximum record this program can store
int max_record = 10;

//global array of records
STUDENT_INFO_t students[10];

//functions prototypes of this program
void display_menu(void);
int read_menu_code(void);
void decode_menu_code(int8_t menu_code);
void display_all_records(STUDENT_INFO_t* record, int8_t max_record);
int check_roll_number(int roll_number, STUDENT_INFO_t* record, int8_t max_record);
int add_new_record(STUDENT_INFO_t* record, int8_t max_record);
int delete_record(STUDENT_INFO_t* record, int8_t max_record);

//starting point this application
int main() {

	int8_t menu_code;
	int8_t app_continue = 1;

	printf("Student record management program\n");

	while (app_continue)
	{
		//1. display menu
		display_menu();

		//read the menu code
		menu_code = read_menu_code();

		if (menu_code) {
			//Decode the menu code
			decode_menu_code(menu_code);
		}
		else {
			//end the application if menu_code = 0;
			app_continue = 0;
			printf("Exiting application\n");
		}

	}

	return 0;

}

void display_menu(void)
{
	printf("Display all records  -->1\n");
	printf("Add new record       -->2\n");
	printf("Delete a record      -->3\n");
	printf("Exit application     -->0\n");
	printf("Enter your option here:");
}

int read_menu_code(void)
{
	int input;
	scanf_s("%d", &input);
	if (input < 0 || input>3) {
		printf("Something went wrong!\n");
		return;
	}
	return input;
}

void decode_menu_code(int8_t menu_code)
{
}

void display_all_records(STUDENT_INFO_t* record, int8_t max_record)
{
}

int check_roll_number(int roll_number, STUDENT_INFO_t* record, int8_t max_record)
{
	return 0;
}

int add_new_record(STUDENT_INFO_t* record, int8_t max_record)
{
	return 0;
}

int delete_record(STUDENT_INFO_t* record, int8_t max_record)
{
	return 0;
}
