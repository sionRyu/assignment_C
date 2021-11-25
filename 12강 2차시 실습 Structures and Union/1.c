#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct {
	int car;
	int std_id;
	int indate[3];
	int intime[2];
	int outdate[3];
	int outtime[2];
}park;

void search_car(park p[], int car_num);
void search_std_id(park p[], int std_id);
int calculate_fee(park p[], int n);

int main(void)
{
	FILE* file = fopen("park.txt", "rw");
	int n = 0, check_car, check_id, user_num;
	fscanf(file, "%d", n);
	park* p = (park*)malloc(sizeof(park) * n);
	int* fee = (int*)malloc(sizeof(int) * n);
	int cnt = 0;


	while (fscanf(file, "%d %d %d-%d-%d %d:%d %d-%d-%d %d:%d", p[cnt].car, p[cnt].std_id, p[cnt].indate[0], p[cnt].indate[1], p[cnt].indate[2], p[cnt].intime[0], p[cnt].intime[1], p[cnt].outdate[0], p[cnt].outdate[1], p[cnt].outdate[2], p[cnt].outtime[0], p[cnt].outtime[1]))
	{
		cnt++;
	}

	printf("Exit if input 0");

	while (true)
	{
		printf("Input car number : ");
		scanf("%d", &check_car);
		if (check_car == 0)
		{
			printf("Not signed number");
			return 0;
		}
		search_car(p, check_car);

		printf("Input student id number : ");
		scanf("%d", &check_id);
		if (check_id == 0)
		{
			printf("Not signed number");
			return 0;
		}
		search_std_id(p, check_id);
	}


	free(p);
	free(fee);
}

void search_car(park p[], int car_num)
{
	if (car_num == 0)
	{
		return;
	}

	int fee = calculate_fee(p, car_num);
	printf("parking fee : %d\n", fee);
}


void search_std_id(park p[], int std_id)
{
	if (std_id == 0)
	{
		return;
	}

	int fee = calculate_fee(p, std_id);
	printf("parking fee : %d\n", fee);
}


int calculate_fee(park p[], int n)
{
	int start_d, end_d, days = 0, hours = 0, mins = 0, fee = 0, dif;
	int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (p[n].indate[1] <= p[n].outdate[1])
	{
		if (p[n].indate[0] < p[n].outdate[0])
		{
			days += 365 * (p[n].outdate[0] - p[n].indate[0]);
		}

		for (int i = p[n].indate[1] + 1; i < p[n].outdate[1]; i++)
		{
			days += months[i];
		}


		days += months[p[n].indate[1]] - p[n].indate[2] + months[p[n].outdate[1]] - p[n].outdate[2];

	}
	else
	{
		if (p[n].indate[0] < p[n].outdate[0])
		{
			days += 365 * (p[n].outdate[0] - p[n].indate[0] - 1);
		}

		for (int i = p[n].outdate[1] ; i < p[n].indate[1]+1; i++)
		{
			days -= months[i];
		}

		days += 365 + p[n].indate[2]+p[n].outdate[2];
	}

	if (//시간 비교하고 days -1 0 +1 숫자는 잘 모르겠음 해주고 days *30000 + mins/10 * 1000원 + mins%10>0 이면 + 1000 원 계산해주기)
	{

	}
}