// C program to illustrate the global scope
#include <stdio.h>

// variable initialized in a global scope
int global = 15;

void display() {
	printf("%d\n", global);
}

int main() {
	printf("Before change within main: ");
	display();

	//change the value of global variable from the main function
	printf("After change within main: ");
	global = 250;
	display();

	//change the value of the global variable again from the main function
	printf("Did another change within global: ");
	global = 40;
	display();
}
