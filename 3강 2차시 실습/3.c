#include <stdio.h>
#include <stdlib.h>

void lotto();
int increase_seed_num = 1;

int main()
{
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
}

void lotto()
{
	static int seed = 1;
	srand(seed);
	int rand1 = rand() % 45 + 1;
	int rand2 = rand() % 45 + 1;
	int rand3 = rand() % 45 + 1;
	int rand4 = rand() % 45 + 1;
	int rand5 = rand() % 45 + 1;
	int rand6 = rand() % 45 + 1;
	printf("%d : %d %d %d %d %d %d\n",seed,rand1,rand2,rand3,rand4,rand5,rand6);
	seed += increase_seed_num;
}
