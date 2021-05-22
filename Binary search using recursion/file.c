#include <stdio.h>

int bubblesort(int arr[], int key, int low, int high);

int main(void)
{
	int num, i, key, position;
	int low, high;

	num = 10;
	int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	low = 0;
	high = num;
	printf("Enter the value to find : ");
	scanf("%d", &key);

	position = bubblesort(data, key, low, high);

	if (position != -1)
	{
		printf("value found -> %d", position);
	}
	else
	{
		printf("value not found");
	}
}

int bubblesort(int arr[], int key, int low, int high)
{
	if (low > high)
	{
		return -1;
	}
	else
	{
		int mid = (low + high) / 2;

		if (key == arr[mid])
		{
			return mid;
		}

		else if (arr[mid] > key)
		{
			return bubblesort(arr, key, low, mid);
		}
		else
		{
			return bubblesort(arr, key, mid, high);
		}
	}
	return -1;
}
