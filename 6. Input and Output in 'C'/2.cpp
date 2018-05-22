#include<stdio.h>
#include<conio.h>

int main() {
	char letter1 = 'A', letter2 = 'b';

	printf(" ASCII values of the characters \"A\" and \"b\": %d and %d", letter1, letter2);


	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}