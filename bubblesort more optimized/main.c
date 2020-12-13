#include <stdio.h>

void bubblesort(int SIZE, int data[5]);

int main(void){
    int SIZE;

    printf("Enter The Size Of The Array : ");
    scanf("%d",&SIZE);

    int data[SIZE];
    for(int i = 0 ; i < SIZE ; i++){
        printf("Enter Values to the array : ");
        scanf("%d",&data[i]);
    }


    bubblesort(SIZE,data);

}

void bubblesort(int SIZE , int data[SIZE]){

    int swapcounter = 1;
    int temp;
    int iterations =0;

    while (swapcounter > 0)
    {
       
        swapcounter = 0;

        for(int i = 0 ; i < SIZE ; i++){

            if(data[i] > data[i+1]){
                temp = data[i];
                data[i]= data[i+1];
                data[i+1]= temp;
                swapcounter = swapcounter+1;
            }
        }
        iterations = iterations+1;
    }

    for(int i = 1 ; i <= SIZE ; i++)
    {
        printf("%d\n", data[i]);
    }
    printf("Number Of Iterations are = %d",iterations);
    
}

