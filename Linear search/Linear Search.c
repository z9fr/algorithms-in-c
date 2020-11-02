#include <stdio.h>


int binarysearch(int data[20], int size , int sk)
{
    printf("\n");
    int num=999;

    for(int i =0 ; i < size ; i++){
        
        if(sk == data[i]){
            printf("[+] The Number You are looking for has been found (%d) ==> %d index\n\n\n\n", sk , i);
            num= 1;
        }


    }

    if(num == 999){
        printf("[!] Sorry We are unable to find the number you are looking for.\n\n");
    }

}


int main()
{
    int data[100];
    int size;
    int sk;

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

  printf("-------------------------------------------------------------------------------\n\n");
    binarysearch(data, size ,sk);

    printf("\n\n\n\n");
    

}

 void banner()
 {
   printf("\n");
   printf("-------------------------------------------------------------------------------\n");
   printf("\t\t\t\t    Linear Search using C.\n");
   printf("\t\t\t\t\tCoded By D4az\n");
   printf("-------------------------------------------------------------------------------\n");
    printf("\n");
 }






