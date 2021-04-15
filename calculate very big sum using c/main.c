#include <stdio.h>

int main()
{
    int size;
    long int sum;

    scanf("%d",&size);
    long int arr[size];

    int f;

    for(int i =0 ; i < size; i++)
    {
        scanf("%ld" ,&arr[i]);
        sum = sum + arr[i];
    }
    printf("%ld",sum);
    
}
