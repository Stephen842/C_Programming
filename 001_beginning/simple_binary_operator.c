#include <stdio.h>

int main() {
	/* A program that print that performs arithmetic operation on two numbers(The purpose to to define the binary operator(An aoperator that requires two numbers to act on) which include the use of +, - , *, / symbols) */
	int a = 5, b = 5;
	int x = 5, y = 10;
	int i = 2, j = 4;
	int c = 4, d = 2;

	int sum = a + b;

	int sub = y - x;

	int mul = i * j;

	int div = c / d;
	
	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", mul);
	printf("%d\n", div);

	return 0;
}
