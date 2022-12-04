#define  _CRT_SECURE_NO_WARNINGS 1
#include"day3.h"
int zuocha(int x) 
{
	int a = x / 1000;
	int b = x / 100 - x / 1000 * 10;
	int c = x / 10 - x / 100 * 10;
	int d = x / 1 - x / 10 * 10;
	int t;
	if (a>b) 
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c) 
	{
		t = a;
		a = c;
		c = t;
	}
	if (a > d)
	{
		t = a;
		a = d;
		d = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (b > d)
	{
		t = b;
		b = d;
		d = t;
	}
	if (c > d)
	{
		t = c;
		c = d;
		d = t;
	}
	int max = a + b * 10 + c * 100 + d * 1000;
	int min = a * 1000 + b * 100 + c * 10 + d;
	int z=max-min;
	if(a!=0)
	{
		printf("%d-%d=%d\n", max, min, z);
	}
	else 
	{
		printf("%d-0%d=%d\n", max, min, z);
	}
	return z;
}
void heidong() 
{
	int x;
	scanf("%d", &x);
	if (x == 6174) 
	{
		zuocha(x);
	}
	else
	{
		while (x != 6174)
		{
			x = zuocha(x);
		}
	}
}