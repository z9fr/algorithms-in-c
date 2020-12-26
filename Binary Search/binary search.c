#include <stdio.h>
#include <stdbool.h>
#define size 5

int search(int data[size], int sk);

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sk = 1;
    int first = 0;
    int last = size - 1;

    search(arr, sk);
}

int search(int array[size], int sk)
{
    int first = 0;
    int last = size - 1;
    int middle;
    middle = (first + last) / 2;

    while (first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] < sk)
            first = middle + 1;
        else if (array[middle] == sk)
        {
            printf("%d found at the index ->%d.\n", sk, middle + 1);
            break;
        }
        else
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }
    }
    if (first > last)
    {
        printf("Not Found!");
    }
}
