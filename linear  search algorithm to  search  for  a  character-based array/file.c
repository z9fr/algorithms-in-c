#include <stdio.h>
void linearsearc(char data[5]);

int main(void)
{
    char data[5] = {"abcde"};

    linearsearc(data);
}

void linearsearc(char data[5])
{

    printf("enter a string to search :");
    char num = getchar();
    int done = -1;

    for (int i = 0; i < 5; i++)
    {

        if (data[i] == num)
        {
            printf("\n-> %d index\n", i);
            done = 0;
            break;
        }
    }

    if(done == 0){
        printf("\nvalue found success");
    }else{
        printf("\nvalue not found in the array ");
    }
}