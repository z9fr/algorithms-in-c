#include <stdio.h>

int linearsearch(int data[5], int size, int sk)
{

    int low=0;
    int high=size-1;
    int mid = (low +high)/2;
    
    while(low <= high)
    {
        if(data[mid] == sk){
            printf("\t [+] Item Found ==> %d" ,mid);
            break;
        }
        else if(data[mid] < sk){
            low= mid+1;
            mid = (low +high)/2;
        }
        else
        {
            high = mid-1;
            mid = (low +high)/2;
        }
        
    }
    

}

int main()
{

    int data[100];
    int size;
    int sk;
    int st;

  banner();


    printf("[!] Enter The Number Of elements in Your set : ");
    scanf("%d",&size);
    printf("\n");

    for(int i =0 ; i < size ; i++){
        printf("\t\t[%d]Enter The Numbers : ",i+1);
        scanf("%d",&data[i]);
    }

    printf("\n");

    printf("[!] Enter The Number You Want to Look For : ");
    scanf("%d",&sk);

    printf("\n");
    printf("\n");
    printf("\n");

    printf("\tEnter 1 if the array is pre sorted\n\tEnter 2 if The array is not sorted\n\n\t\t\t==>");
    scanf("%d",&st);

    printf("\n");
    printf("\n");
    printf("\n");


    if(st==2){
        bubblesort(data,size,sk);

    }

    else
    {
         linearsearch(data, size, sk);
    }
    
    printf("\n\n");
    printf("-------------------------------------------------------------------------------\n\n");

   
}



void bubblesort( int data[100], int size,int sk)
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
    printf("The array is sorting /...");
       printf("\n");
       printf("\n");

   printf("[!]The sorted array is : \n");

    for(int x=0 ; x< size;x++){
        printf("\t\t\t   %d\n", data[x]);
    }
       printf("\n");
       printf("\n");
       printf("\n");


         linearsearch(data, size, sk);

}

 void banner()
 {
   printf("\n");
   printf("-------------------------------------------------------------------------------------------\n");
   printf("\t\t\tBinary Search Algorithem using C\n");
   printf("\t\t\t\tCoded By D4az\n");
   printf("This also has bubble sort too because we cant do binary search for decending oder arrays\n");
   printf("-------------------------------------------------------------------------------------------\n");
   printf("\n");
 }
