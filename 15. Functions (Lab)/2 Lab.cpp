#include<stdio.h>
#include<conio.h>

int enternum();
int factorial(int number);


int main() {
	
	factorial(enternum());

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}

int enternum()
{
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	return num;
}

int factorial(int number)
{
	printf("%d factorial is: ", number);
	for (int i = (number - 1); i > 0; i--)
	{
		number = number * i;
	}
	printf("%d\n", number);
	return number;
}