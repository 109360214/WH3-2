#include<stdio.h>
#include<stdlib.h>

int power(int, int);

int main(void)
{
	int a, b;
	printf("Please enter base and exponent:");
	scanf_s("%d %d", &a, &b);
	printf("%d", power( a, b));
	system("pause");
	return 0;
}

int power(int c, int d)
{
	int e ,f=c;
	for (e = 1; e < d;e++)
	{
		f = f * c;
	}
	return f;
}