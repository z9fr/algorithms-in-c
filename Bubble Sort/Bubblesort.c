#include <stdio.h>
void bubblesort( int data[100], int size)
{
    int temp;

    for(int i =0 ; i <size-1; i++){
        for(int j =0 ; j < size-1-i; j++){

            if(data[j] > data[j+1]){
                temp = data[j];
                data[j] =data[j+1];
                data[j+1]= temp;
            }
        }
    }

   printf("\n");
   printf("\t\t[!]The sorted array is : \n");

    for(int x=0 ; x< size;x++){
        printf("%d\n", data[x]);
    }
       printf("\n");
}


 int main()
 {
  
   int arr[100];
   int size;

  banner();

  printf("[!] Enter The size of the array you want so sorted :");
  scanf("%d",&size);

  for(int i =0 ; i < size ; i ++){
    printf("\t\t\tEnter Number (%d) ==> ",i+1);
    scanf("%d",&arr[i]);
  }


   bubblesort(arr,size);
 }
 
 void banner()
 {
   printf("\n");
   printf("-------------------------------------------------------------------------------\n");
   printf("\t\t\tBubble Sort Algorithem using C\n");
   printf("\t\t\t\tCoded By D4az\n");
   printf("-------------------------------------------------------------------------------\n");
    printf("\n");
 }
