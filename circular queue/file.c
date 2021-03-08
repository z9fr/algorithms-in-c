#include <stdio.h>
#include <stdbool.h>
#define size 5

typedef struct
{
    int data[5];
    int front;
    int rear;
} mainf;

mainf st;

int enque(int number)
{
    if (st.front == st.rear + 1)
    {
        printf("Queue is full\n");
    }
    else if (st.rear == size - 1)
    {
        st.rear = 0;
        printf("Rear Reset to one\n");
    }
    else
    {
        st.rear++;
        st.data[st.rear] = number;
        printf("%d -> Added \n", st.data[st.rear]);
    }
}

void dequeue()
{
    int out;
    st.front++;
    out = st.data[st.front];

    printf("%d -> Removed\n", out);
}

int main(void)
{
    int user, value;
    st.front = -1;
    st.rear = -1;
    bool out = true;

    printf("Enter one to enqueue queue :\n");
    printf("Enter two to dequeue queue :\n");
    printf("Enter three to exit :\n");
    scanf("%d", &user);

    while (out = true)
    {
        scanf("%d", &user);

        if (user == 1)
        {
            printf("Enter a value to Enqueue");
            scanf("%d", &value);
            enque(value);
            out = true;
        }
        else if (user == 2)
        {
            dequeue();
            out = true;
        }
        else if (user == 3)
        {
            out == false;
        }
        else
        {
            out = false;
        }
    }
}
