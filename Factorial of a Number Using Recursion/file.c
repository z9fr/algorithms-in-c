#include <stdio.h>
int factorial(int num);

int main(void)
{
	int n;
	printf("Enter a number to find factorial : ");
	scanf("%d", &n);

	printf("%d", factorial(n));
}

int factorial(int num)
{
	if (num <= 0)
	{
		return 1;
	}
	else
	{
		return num * (factorial(num - 1));
	}
}