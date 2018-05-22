#include<stdio.h>
#include<conio.h>

int main() {
	int number;
	printf("Enter a number to generate a multiplication table: ");
	scanf("%d", &number);
	for (int i = 1; i <= 10; i++)
	{
		printf("%d x %2d = %d", number, i, number * i);
		printf("\n");
	}
	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
