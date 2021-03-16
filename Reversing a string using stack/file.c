#include <stdio.h>
#include <string.h>

typedef struct
{
	char theword[10];
	char theoutput[10];
	char data[10];
	int top;
}hello;
hello st;

void push(char letter)
{
	st.data[st.top] = letter;
	printf("%c enterd\n", st.data[st.top]);
	st.top++;

}

void pop(int i)
{
	st.top--;
	st.theoutput[i] = st.data[st.top];
	printf("%c removed\n", st.data[st.top]);
}

int main(void)
{
	printf("Reversing a string using stack - C\n\n");
	printf("Enter The charactor : ");
	scanf("%s", &st.theword);

	for (int i = 0; i < strlen(st.theword); i++)
	{
		push(st.theword[i]);
	}

	for (int i = 0; i < strlen(st.theword); i++)
	{
		pop(i);
	}

	printf("\n\nthe reversed string is : \n\n");

	for (int i = 0; i <= strlen(st.theword); i++)
	{
		printf("%c", st.theoutput[i]);
	}
}
