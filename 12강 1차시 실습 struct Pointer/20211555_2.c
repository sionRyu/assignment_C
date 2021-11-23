#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	int x;
	int y;
}point;

typedef struct {
	point left_bottom;
	int width;
	int height;
}rectangle;

int main(void)
{
	point p;
	rectangle r;

	printf("Input X of Benchmark : ");
	scanf("%d", &p.x);
	printf("Input Y of Benchmark : ");
	scanf("%d", &p.y);

	r.left_bottom = p;

	printf("Input width of Rectangle : ");
	scanf("%d", &r.width);
	printf("Input height of Rectangle : ");
	scanf("%d", &r.height);


	printf("Left-bottom : (%d,%d)\nRight-bottom : (%d,%d)\nLeft-top : (%d,%d)\nRight-top : (%d,%d)\n", r.left_bottom.x, r.left_bottom.y, r.left_bottom.x + r.width, r.left_bottom.y, r.left_bottom.x, r.left_bottom.y + r.height, r.left_bottom.x + r.width, r.left_bottom.y + r.height);
}