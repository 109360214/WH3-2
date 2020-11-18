#include<stdio.h>
#include<stdlib.h>

int gcd(int, int);
int lcm(int, int);

int main(void)
{
	int integer1, integer2;
	printf("Please enter two integers:\n");
	scanf_s("%d %d ", &integer1, &integer2);
	printf("lcm= %d", lcm(integer1, integer2));
	system("pause");
	return 0;
}

int gcd(int m, int n) {
	while (n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int lcm(int m, int n) {
	return m * n / gcd(m, n);
}