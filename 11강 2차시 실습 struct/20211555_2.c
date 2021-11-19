#include<stdio.h>
#include<string.h>
#include<stdlib.h>

enum Date getDate(int year, int month, int day);
char* getDayOfWeek(enum Date currDate);

enum Date { Sunday = 0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

struct Calendar {
	int year, month, day;
	enum Date date;
	char* dateString;
};

char* day;

int main(void)
{
	struct Calendar cal;

	printf("Input Year : ");
	scanf("%d", &cal.year);
	printf("Input Month : ");
	scanf("%d", &cal.month);
	printf("Input Day : ");
	scanf("%d", &cal.day);

	cal.date = getDate(cal.year, cal.month, cal.day);
	cal.dateString = (char*)malloc(sizeof(char) * 10);
	day = (char*)malloc(sizeof(char) * 10);
	strcpy(cal.dateString, getDayOfWeek(cal.date));
	printf("%d-%d-%d is %s", cal.year, cal.month, cal.day, cal.dateString);

	free(day);
	free(cal.dateString);
	printf("\n");
}

enum Date getDate(int year, int month, int day)
{
	int checkday;
	int day_num;
	day_num = (year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day) % 7;
	for (int checkday = Sunday; checkday <= Saturday; checkday++)
	{
		if (day_num == checkday)
		{
			return (enum Date)checkday;
		}
	}
}

char* getDayOfWeek(enum Date currDate)
{

	switch (currDate)
	{
	case Sunday:
		strcpy(day, "Sunday");
		break;
	case Monday:
		strcpy(day, "Monday");
		break;
	case Tuesday:
		strcpy(day, "Tuesday");
		break;
	case Wednesday:
		strcpy(day, "Wednesday");
		break;
	case Thursday:
		strcpy(day, "Thursday");
		break;
	case Friday:
		strcpy(day, "Friday");
		break;
	case Saturday:
		strcpy(day, "Saturday");
		break;
	default:
		break;
	}
	return day;
}