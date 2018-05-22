#include<stdio.h>
#include<conio.h>

int main() {
	int number1 = 0, number2 = 1, number3, numseries;
	printf("Enter number of elements: ");
	scanf("%d", &numseries);
	for (int i = 0; i < numseries; i++)
	{
		number3 = number1 + number2;
		printf("%d  ", number3);
		number1 = number2;
		number2 = number3;
	}

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
