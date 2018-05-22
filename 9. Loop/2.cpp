#include<stdio.h>
#include<conio.h>

int main() {
	int num1, num2, sum = 0;
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	if (num1 % 2 != 0) { sum = sum + num1; }
	if (num2 % 2 != 0) { sum = sum + num2; }
	printf("Sum of all odd numbers:	%d", sum);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
