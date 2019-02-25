#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
static int (*operator[])(int,int)={ plus , minus , multiply , divided};
int main()
{
	int a, c, op;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	switch (b)
	{
		case '+':
			op=0;
			break;
		case '-':
			op=1;
			break;
		case '*':
			op=2;
			break;
		case '/':
			op=3;
			break;
		default:
			break;
	}	
	a=operator[op](a,c);
	printf("Answer is %i\n", a);
	return 0;
}
