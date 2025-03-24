 #include <stdio.h>

int main() {
	int i = 12;
	int j = 15;

	int* ptr = &i;

	printf("Pointer: %d\n", *ptr);

	ptr = &j;

	printf("Pointer: %d\n", *ptr);

	return 0;
}
