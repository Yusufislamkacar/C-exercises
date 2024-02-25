#include <stdio.h>

typedef int mytype;

int main() {

	mytype a = 4;

	printf("%d + %d = %d\n", a,a,a+a);

	getchar();
	system("cls");

	typedef struct {
		char first[10];
		char second[10];
	}PERSONAL_t;

	typedef struct {
		int day;
		int month;
		int year;

	}DATE_t;


	struct human
	{
		DATE_t birthday;
		PERSONAL_t name;
	};

	struct human myfriend;
	
	myfriend.birthday.day = 29;
	myfriend.birthday.year = 2001;
	myfriend.birthday.month = 8;
	strcpy(myfriend.name.first, "Gavat");
	strcpy(myfriend.name.second, "Hasan");

	printf("My friend is %s %s\n", myfriend.name.first, myfriend.name.second);
	printf("Her birthday is %d/%d/%d", myfriend.birthday.day,myfriend.birthday.month , myfriend.birthday.year);

	

}