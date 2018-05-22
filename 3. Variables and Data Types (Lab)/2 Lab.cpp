#include<stdio.h>
#include<conio.h>

int main() {
	int age, salary;

	printf("Enter your salary: ");
	scanf("%d", &salary);

	printf("Enter your age   : ");
	scanf("%d", &age);

	printf("Your salary: %d\n", salary);
	printf("Your age   : %d\n", age);

	fseek(stdin, 0, SEEK_END); //flush
	printf("Press Enter to continue.");
	getchar();

	return 0;
}