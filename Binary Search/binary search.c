#include <stdio.h>
#include <stdbool.h>
#define size 5

int binarysearch(int data[], int sk)
{
    int first = 0;
    int last = size - 1;
    int mid = (last + first) / 2;

    bool falg = false;

    while (first < last && !falg)
    {
        if (data[mid] == sk)
        {
            return mid;
            falg == true;
        }

        else if (data[mid] < sk)
        {
            falg == false;

            first = mid + 1;
            last = last;
        }
        else if (data[mid] > sk)
        {
           falg == false;
            first = first;
            last = mid - 1;
        }
        mid = (last + first) / 2;
    }
    return -1;
}

int main(void)
{
    int data[size] = {1, 2, 3, 4, 5};
    int sk;
    printf("Enter the search key ");
    scanf("%d", &sk);

    int value = binarysearch(data, sk);

    if (value != -1)
    {
        printf("value found %d", value);
    }
    else{
        printf("value not found on the array");
    }
}
