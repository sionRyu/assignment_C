#include <stdio.h>

int main(void)
{
	int i, * pI;
	char c, * pC;
	double d, * pD;
	pI = &i;
	pC = &c;
	pD = &d;

	printf("pi : %p, pi+1 : %p\n", pI, (pI + 1));
	printf("pc : %p, pc+1 : %p\n", pC, (pC + 1));
	printf("pd : %p, pd+1 : %p\n", pD, (pD + 1));

	return 1;
}