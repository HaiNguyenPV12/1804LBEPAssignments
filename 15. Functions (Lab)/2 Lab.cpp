#include<stdio.h>
#include<conio.h>

int factorial(int number);


int main() {
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("%d factorial is: %d", num, factorial(num));

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}

int factorial(int number)
{	
	for (int i = (number - 1); i > 0; i--)
	{
		number = number * i;
	}
	return number;
}
