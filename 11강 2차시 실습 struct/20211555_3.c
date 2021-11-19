#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES
#include<math.h>

typedef float* Vector_Components;
typedef float Component;
typedef double VectorSize;
typedef double Distance;
typedef double Scalar;
typedef double Angle;

typedef struct {
	Vector_Components comps;
	int vec_size;
}Vector;

VectorSize getSize(Vector v);
Distance getDistance(Vector v1, Vector v2);
Scalar getDotProduct(Vector v1, Vector v2);
Angle getAngle(Vector v1, Vector v2);
Vector v1;
Vector v2;

double distance = 0.0f;
double dotProduct = 0.0f;

int main(void)
{
	printf("Input size of Vector v1 : ");
	scanf("%d", &v1.vec_size);
	v1.comps = (Vector_Components)malloc(sizeof(Component) * v1.vec_size);
	printf("Input %d Components of v1 : ", v1.vec_size);
	for (int i = 0; i < v1.vec_size; i++)
	{
		scanf("%f", &v1.comps[i]);
	}

	printf("Input size of Vector v2 : ");
	scanf("%d", &v2.vec_size);
	v2.comps = (Vector_Components)malloc(sizeof(Component) * v2.vec_size);
	printf("Input %d Components of v2 : ", v2.vec_size);
	for (int i = 0; i < v2.vec_size; i++)
	{
		scanf("%f", &v2.comps[i]);
	}

	printf("\n\nResult\n");

	if (v1.vec_size != v2.vec_size)
	{
		printf("Size of v1 = %.2lf\n", getSize(v1));
		printf("Size of v2 = %.2lf\n", getSize(v2));
	}
	else
	{
		printf("Size of v1 = %.2lf\n", getSize(v1));
		printf("Size of v2 = %.2lf\n", getSize(v2));
		printf("Distance between v1 and v2 = %.3lf\n", getDistance(v1, v2));
		printf("Dot Product v1 * v2 = %.lf\n", getDotProduct(v1, v2));
		printf("Angle between v1 and v2 = %.2lf\n", getAngle(v1, v2));
	}
}

VectorSize getSize(Vector v)
{
	double result = 0;
	for (int i = 0; i < v.vec_size; i++)
	{
		result += (v.comps[i]) * (v.comps[i]);
	}
	return sqrt(result);
}


Distance getDistance(Vector v1, Vector v2)
{
	for (int i = 0; i < v1.vec_size; i++)
	{
		distance += (v1.comps[i] - v2.comps[i]) * (v1.comps[i] - v2.comps[i]);
	}
	distance = sqrt(distance);
	return distance;
}

Scalar getDotProduct(Vector v1, Vector v2)
{
	for (int i = 0; i < v1.vec_size; i++)
	{
		dotProduct += v1.comps[i] * v2.comps[i];
	}
	return dotProduct;
}

Angle getAngle(Vector v1, Vector v2)
{
	double sum1 = 0.0f;
	double sum2 = 0.0f;
	for (int i = 0; i < v1.vec_size; i++)
	{
		sum1 += v1.comps[i] * v1.comps[i];
		sum2 += v2.comps[i] * v2.comps[i];
	}

	sum1 = sqrt(sum1);
	sum2 = sqrt(sum2);
	for (int i = 0; i < v1.vec_size; i++)
	{
		v1.comps[i] /= sum1;
		v2.comps[i] /= sum2;
	}

	double dotR = 0.0f;

	for (int i = 0; i < v1.vec_size; i++)
	{
		dotR += v1.comps[i] * v2.comps[i];
	}

	double result = 0.0f;
	result = acos(dotR) * (180 / M_PI);

	return result;
}