/* This program purpose is to understand the concept of variables in C, So I explicitly type in a result details for two students */

#include <stdio.h>

int main() {
	
	char name[] = "Stephen";
	int age = 21;

	printf("Name: %s\n", name);
	printf("Age: %d\n", age);

	//created variables to store in grades
	char math, english, biology, physics, chemistry;

	math = 'A';
	english = 'A';
	biology = 'B';
	physics = 'B';
	chemistry = 'A';

	printf("--- Grades ---\n");
	printf("Mathematics: %c\n", math);
	printf("English: %c\n", english);
	printf("Biology: %c\n", biology);
	printf("Physics: %c\n", physics);
	printf("Chemistry: %c\n", chemistry);

	return 0;
}

