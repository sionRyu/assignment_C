#include<stdio.h>

int a[10][10] = { 0 };
int b;

int Reservation();
int Cancel();
int Now();
int Exit();

int main(void)
{
	while (true)
	{
		printf("[1] 예약    [2] 취소    [3] 현황    [4] 종료\n메뉴 선택 : ");
		scanf("%d", &b);
		if (b == 4)
		{
			Exit();
			break;
		}

		printf("\n================================================\n     ");
		for (int i = 1; i < 11; i++)
		{
			printf("%d   ", i);
		}
		printf("\n");
		for (int j = 0; j < 10; j++)
		{
			printf("%d   ", j);
			for (int k = 0; k < 10; k++)
			{
				printf("%d   ", a[j][k]);
			}
			printf("\n");
		}
		switch (b == 1)
		{
			Reservation();
			continue;
		}
		switch (b == 2)
		{
			Cancel();
			continue;
		}
		switch (b == 3)
		{
			Now();
			continue;
		}
	}
}



int Exit()
{
	printf("\n프로그램을 종료합니다\n");
	return 0;
}