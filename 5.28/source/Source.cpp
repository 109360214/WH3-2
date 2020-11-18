#include<stdio.h>
#include<stdlib.h>

char change(char A);

int main(void)
{
	char ch1;
	printf("Please enter the character:");
	scanf_s("%c", &ch1);
	printf("Become %c", change(ch1));
	system("pause");
	return 0;
}

char change(char A)
{
	char ch2;
	if (A < 94)
	{
		char ch2 = A + 32;
		return ch2;
	}
	else
	{
		char ch2 = A - 32;
		return ch2;
	}
}