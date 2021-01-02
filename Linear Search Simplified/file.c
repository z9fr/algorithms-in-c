#include <stdio.h>
#include <stdbool.h>
#define size 5


int linearsearch(int data[] , int sk)
{
    int anw;
    bool flag = false;

    for(int i = 0 ; i < size ; i++){

        if(data[i] == sk){
            anw = i;
            flag = true;
            break;
        }
        
    }

    if(flag == false){
        return -1;
    }else{
        return anw;
    }
}


int main(void){
    int data[size] = {5,4,3,8,1};
    int sk;
    printf("enter the search key : ");
    scanf("%d",&sk);
    
    int out = linearsearch(data ,sk);

    if(out != -1){
        printf("value found -> %d", out);
    }else{
        printf("not found!");
    }
}