#include <stdio.h>
#define size 5
void insertionsort(int data[size]);

int main(void)
{
	int data[size] = {5, 4, 3, 2, 1};
	insertionsort(data);
}

void insertionsort(int data[size])
{

	int mid;
	for (int i = 0; i < size; i++)
	{
		mid = i;

		for(int j = i+1 ; j < size ; j++){

			if(data[mid] > data[j]){
				mid = j;
			}

			if(mid != i){
				data[mid] = data[mid] + data[i];
				data[i] = data[mid] - data[i];
				data[mid] = data[mid] - data[i];
			}
		}
	}

    printf("this soarted array is : \n");

	for(int i = 0 ; i < size ; i++){
		printf("%d\n", data[i]);
	}
}
