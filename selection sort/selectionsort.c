#include <stdio.h>

void selectionsort(int data[100], int size){
  int temp=0;
  int min=0;

  for(int i = 0 ; i < size -1; i++){

    min =i;

    for(int j= i+1; j < size; j++){

      if(data[j] < data[min]){
        temp = data[j];
        data[j]= data[min];
        data[min]= temp;
      }
    }
  }
  
   printf("\n");
   printf("\t[!]The sorted array is : \n");

  for(int x =0 ; x < size; x++){
    printf("%d\n",data[x]);
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

   selectionsort(arr,size);
 }
 
 void banner()
 {
   printf("\n");
   printf("-------------------------------------------------------------------------------\n");
   printf("\t\t\tSelection sort Algorithem Using C\n");
   printf("\t\t\t\tCoded By D4az\n");
   printf("-------------------------------------------------------------------------------\n");
    printf("\n");
 }
