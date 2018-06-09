#include<stdio.h>
#include<conio.h>

int main() {
	int num1, num2, sum = 0;
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	for (int i = num1; i <= num2; i++)
	{
		if (i % 2 != 0)
		{
			sum = sum + i;
		}
	}
	printf("Sum of all odd numbers:	%d", sum);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
