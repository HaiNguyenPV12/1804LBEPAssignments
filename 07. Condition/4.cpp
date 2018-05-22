#include<stdio.h>
#include<conio.h>

int main() {
	int salary;
	int totalsalary = 0;
	char grade;

	printf("Grade\t\tAllowance\n");
	printf("A\t\t"); printf("300\n");
	printf("B\t\t"); printf("250\n");
	printf("Others\t\t"); printf("100\n");

	printf("Enter Salary: ");
	scanf("%d", &salary);
	fseek(stdin, 0, SEEK_END); //flush
	
	do {
		printf("Enter Grade (A, B, O): ");
		scanf("%c", &grade);
		fseek(stdin, 0, SEEK_END); //flush
		switch (grade)
		{
		case 'A':
			totalsalary = salary + 300;
			printf("\nSalary: %d", totalsalary);
			break;
		case 'B':
			totalsalary = salary + 250;
			printf("\nSalary: %d", totalsalary);
			break;
		case 'O':
			totalsalary = salary + 100;
			printf("\nSalary: %d", totalsalary);
			break;
		default:
			printf("\nPlease enter A, B, or O\n");
			break;
		}
	} while (totalsalary != salary + 300 && totalsalary != salary + 250 && totalsalary != salary + 100);

	/*if (grade == 'a' || grade == 'A')
	{
		totalsalary = salary + 300;
		printf("\nSalary: %d", totalsalary);
	}
	else if (grade == 'b' || grade == 'B')
	{
		totalsalary = salary + 250;
		printf("\nSalary: %d", totalsalary);
	}
	else if (grade == 'o' || grade == 'O')
	{
		totalsalary = salary + 100;
		printf("\nSalary: %d", totalsalary);
	}*/

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
