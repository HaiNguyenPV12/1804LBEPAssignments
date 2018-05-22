#include<stdio.h>
#include<conio.h>

int main() {
	int num1, num2, num3;
	printf("Enter 3 numbers.\n");
	printf("Number 1: ");
	scanf("%d", &num1);
	printf("Number 2: ");
	scanf("%d", &num2);
	printf("Number 3: ");
	scanf("%d", &num3);
	printf("Sum of 3 numbers: %d\n", num1 + num2 + num3);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}