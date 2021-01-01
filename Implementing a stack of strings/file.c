#include <stdio.h>
#define size 6

typedef struct
{
	char data[size];
	int top;
} charstruct;

charstruct st;

void push(char aletter)
{
	st.data[st.top] = aletter;
	printf("%c -> input\n", st.data[st.top]);
	st.top++;
}

void pop()
{
	st.top--;
	printf("%c", st.data[st.top]);
}

int main(void)
{
	st.top = 0;
	char inp[size];

	printf("enter a string : ");
	scanf("%s", &inp);

	for (int i = 0; i < size; i++)
	{
		push(inp[i]);
	}

	for (int i = 0; i < size; i++)
	{
		pop();
	}
}
