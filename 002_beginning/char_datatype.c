// C program to store character datatype

#include <stdio.h>
int main() {
	char a  = 'a';
	char b, c, d, e;

	printf("The value of a: %c\n", a);

	a++;
	printf("The value of a upon increment is: %c\n", a);

	b = 98;
	c = 'c';
	d = 100;
	e = 'e';

	//Actually used a combination of ASCII encoding
	printf("The value of b: %c\n", b);
	printf("The value of c: %c\n", c);
	printf("The value of d: %c\n", d);
	printf("The value of e: %c\n", e);

	return 0;
}
