#include <stdio.h>
 
 int funtion(int data[100], int size){

   int temp,i,j,current;

   for(i =1 ; i < size ; i++){
     current= data[i];
     j=i-1;

     while (j >= 0 && data[j] > current)
     {
       temp = data[j];
       data[j]= data[j+1];
       data[j+1] =temp;

       j= j-1;
     }
   }


   printf("\n");
   printf("\t\t[!]The sorted array is : \n");
   
   for(int x =0 ; x < size ; x++){
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


   funtion(arr,size);
 }
 
 void banner()
 {
   printf("\n");
   printf("-------------------------------------------------------------------------------\n");
   printf("\t\t\tInsertion sort Algorithem using C\n");
   printf("\t\t\t\tCoded By D4az\n");
   printf("-------------------------------------------------------------------------------\n");
    printf("\n");
 }
