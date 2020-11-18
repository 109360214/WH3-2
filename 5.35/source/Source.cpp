#include<stdio.h>
#include<stdlib.h>

int fibonacci(int a);

int e=0, f=1;
int main(void)
{
	unsigned long int n,i;
	
	printf("n=?");
	scanf_s("%d", &n);
	printf("%d %d", e, f);
	for (i = 0; i < n-2; i++)
	{
		printf(" %d", fibonacci(i));
		
	}



	system("pause");
	return 0;
}

int fibonacci(int a)
{ 
	unsigned long long int g;
	g = e + f;
	
	e = f;
	f = g;
	return g;
}