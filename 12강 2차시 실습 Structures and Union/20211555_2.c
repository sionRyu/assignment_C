#include<stdio.h>
#include<stdlib.h>
#include<string.h>

union utemp {
	int i;
	float f;
	double d;
};

typedef struct {
	int type;
	char name[10];
	union utemp a;
	union utemp b;
}stemp;

void multiply(stemp* s);

int main(void)
{
	int check_ite, check_type;

	printf("Number of iteration : ");
	scanf("%d", &check_ite);

	stemp* s = (stemp*)malloc(sizeof(stemp) * 3);

	(s + 0)->type = 1;
	(s + 1)->type = 2;
	(s + 2)->type = 3;

	for (int i = 0; i < check_ite; i++)
	{
		printf("\nType[1 for int, 2 for float, 3 for double] : ");
		scanf("%d", &check_type);
		if (check_type == 1)
		{
			multiply(s + 0);
		}
		else if (check_type == 2)
		{
			multiply(s + 1);
		}
		else if (check_type == 3)
		{
			multiply(s + 2);
		}
	}

	printf("\n\n----------Result----------\n%-10s%d\n%-10s%.4f\n%-10s%.4lf\n", (s + 0)->name, (s + 0)->b.i, (s + 1)->name, (s + 1)->b.f, (s + 2)->name, (s + 2)->b.d);

	free(s);
}

void multiply(stemp* s)
{
	if (s->type == 1)
	{
		strcpy(s->name, "integer:");
		printf("Enter an integer value : ");
		scanf("%d %d", &s->a.i, &s->b.i);
		s->b.i *= s->a.i;
	}
	else if (s->type == 2)
	{
		strcpy(s->name, "float:");
		printf("Enter an float value : ");
		scanf("%f %f", &s->a.f, &s->b.f);
		s->b.f *= s->a.f;
	}
	else if (s->type == 3)
	{
		strcpy(s->name, "double:");
		printf("Enter an double value : ");
		scanf("%lf %lf", &s->a.d, &s->b.d);
		s->b.d *= s->a.d;
	}
}