#define  _CRT_SECURE_NO_WARNINGS 1
#include"day3.h"
void paixu(int* x, int* y, int* z) 
{
	int b;
	if (*x > *y) 
	{
		b = *x;
		*x = *y;
		*y = b;
	}
	if (*x > *z)
	{
		b = *x;
		*x = *z;
		*z = b;
	}
	if (*y > *z)
	{
		b = *y;
		*y = *z;
		*z = b;
	}
}
void issanjiao() 
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && b + c > a)
	{
		paixu(&a, &b, &c);
		if (a * a + b * b == c * c)
			printf("Right triangle");
		if (a * a + b * b < c * c)
			printf("Obtuse triangle");
		if (a * a + b * b > c * c)
			printf("Acute triangle");
	}
	else
		printf("Not triangle");
}