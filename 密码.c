#define  _CRT_SECURE_NO_WARNINGS 1
#include"day3.h"
void mima() 
{
	int x, y;
	scanf("%d %d", &x, &y);
	int a, b, c, d, e, f;
	for (int i = x; i <= y; i++) 
	{
		int flag = 0;
		a = i / 100000;
		b = i / 10000 - i/100000 * 10;
		c = i / 1000 - i/10000 * 10;
		d = i / 100 - i/1000 * 10;
		e = i / 10 - i/100 * 10;
		f = i / 1 - i/10 * 10;
		if (a % 2 != 1 || c % 2 != 1 || e % 2 != 1) 
		{
			continue;
		}
		else if (b % 2 != 0 || d % 2 != 0 || f % 2 != 0) 
		{
			continue;
		}
		else if (a == c || a == e || c == e || b == d || b == f || d == f) 
		{
			continue;
		}
		else if (c * 10 + d >= 1 && c * 10 + d <= 12) 
		{
			continue;
		}
		else if ((a > b && b > c) || (a < b && b < c)) 
		{
			continue;
		}
		else if ((d < e && e < f) || (d > e && e > f)) 
		{
			continue;
		}
		else if ((a * 100 + b * 10 + c - d * 100 - e * 10 - f) % 23 != 13) 
		{
			continue;
		}
		else if (e * 10 + f >= 1 && e * 10 + f <= 31) 
		{
			continue;
		}
		else 
		{
			flag = 1;
		}
		if (flag == 1) 
		{
			printf("%d\n", i);
		}
	}
}