#include <stdio.h>
<<<<<<< Updated upstream

int main(void)
{

	int num1=0,num2=0,diff=0;
	
	printf("input two numbers which is more 100 under 1000: ");
	scanf("%d %d",&num1,&num2);

	if(num1/100 == num2/100)
	{
		diff++;
	}
	num1 -= (num1/100)*100;
	num2 -= (num2/100)*100;
	if(num1/10 == num2/10)
	{
		diff++;
	}
	num1 -= (num1/10)*10;
	num2 -= (num2/10)*10;
	if(num1 == num2)
	{
		diff++;
	}

	printf("Hamming Distance : %d\n",diff);

=======
#include <stdlib.h>

void lotto();

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
	seed ++;
>>>>>>> Stashed changes
}
