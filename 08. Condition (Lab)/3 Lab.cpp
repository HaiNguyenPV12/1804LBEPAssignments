#include<stdio.h>
#include<conio.h>

int main() {
	int num1, num2, num3;

	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	printf("Enter number 3: ");
	scanf("%d", &num3);

	if (num1 >= num2 && num1 >= num3) { printf("\nHighest Value : %d\n", num1); }
	else if (num2 >= num1 && num2 >= num3) { printf("\nHighest Value : %d\n", num2); }
	else if (num3 >= num1 && num3 >= num2) { printf("\nHighest Value : %d\n", num3); }

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
