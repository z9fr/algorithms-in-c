#include <stdio.h>
int fabseriese(int num);

int main(void)
{
	int size;
	printf("Enter the amount -> ");
	scanf("%d",&size);

	for (int i = 0; i < size; i++)
	{
		printf("%d\n",fabseriese(i));
	}
}

int fabseriese(int num)
{
	if (num == 0 || num == 1)
	{
		return num;
	}
	else
	{
		return (fabseriese(num - 1) + fabseriese(num - 2));
	}
}