#include <stdio.h>

// Decclared the external variable and function
extern int a;
void myfun();

int main(void){
	// initailaize the global variable
	a = 4;

	/* Call the function to print the value of a */
	myfun();

	return 0;
}
