#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int a[10][10] = { 0 };
int b, c, d;

void Reservation(int h, int v, int ar[][10]);
void Cancel(int h, int v, int ar[][10]);
void Now();
void Exit();

int main(void)
{
	while (true)
	{
		printf("[1] ����    [2] ���    [3] ��Ȳ    [4] ����\n�޴� ���� :  ");
		scanf("%d", &b);
		if (b == 4)
		{
			Exit();
			break;
		}
		else if (b == 3)
		{
			Now();
			continue;
		}


		printf("\n==============================================\n    ");
		for (int i = 1; i < 11; i++)
		{
			printf("%d   ", i);
		}
		printf("\n");
		for (int j = 0; j < 10; j++)
		{
			if (j != 9)
			{
				printf("%d   ", j + 1);
			}
			else
			{
				printf("%d  ", j + 1);
			}
			for (int k = 0; k < 10; k++)
			{
				printf("%d   ", a[j][k]);
			}
			printf("\n");
		}
		printf("==============================================\n");

		if (b == 1)
		{
			printf("������ �¼��� ���� ��ȣ : ");
			scanf("%d", &d);
			printf("������ �¼��� ���� ��ȣ : ");
			scanf("%d", &c);
			c -= 1;
			d -= 1;
			Reservation(c, d, a);
			continue;
		}
		else
		{
			printf("����� �¼��� ���� ��ȣ : ");
			scanf("%d", &d);
			printf("����� �¼��� ���� ��ȣ : ");
			scanf("%d", &c);
			c -= 1;
			d -= 1;
			Cancel(c, d, a);
			continue;
		}
	}
}

void Reservation(int h, int v, int ar[][10])
{
	if (ar[h][v] == 1)
	{
		printf("�ش� �¼��� �̹� ����Ǿ����ϴ�");
	}
	else if (ar[h - 1][v] == 1 || ar[h + 1][v] == 1 || ar[h][v - 1] == 1 || ar[h][v + 1] == 1 && !(h == 9 && v == 9))
	{
		printf("�ش� �¼��� ��ȸ�� �Ÿ��α�� ���� ������ �� �����ϴ�.");
	}
	else if (h == 9 && v == 9)
	{
		if (ar[h - 1][v] == 1 || ar[h][v - 1] == 1)
		{
			printf("�ش� �¼��� ��ȸ�� �Ÿ��α�� ���� ������ �� �����ϴ�.");
		}
		else
		{
			ar[h][v] = 1;
			printf("���ŵǾ����ϴ�");
		}
	}
	else
	{
		ar[h][v] = 1;
		printf("���ŵǾ����ϴ�");
	}
	printf("\n");
}

void Cancel(int h, int v, int ar[][10])
{
	ar[h][v] = 0;
	printf("\n");
}

void Now()
{
	printf("\n==============================================\n    ");
	for (int i = 1; i < 11; i++)
	{
		printf("%d   ", i);
	}
	printf("\n");
	for (int j = 0; j < 10; j++)
	{
		if (j != 9)
		{
			printf("%d   ", j + 1);
		}
		else
		{
			printf("%d  ", j + 1);
		}
		for (int k = 0; k < 10; k++)
		{
			printf("%d   ", a[j][k]);
		}
		printf("\n");
	}
	printf("==============================================\n");
}

void Exit()
{
	printf("\n���α׷��� �����մϴ�\n");
	exit(0);
}