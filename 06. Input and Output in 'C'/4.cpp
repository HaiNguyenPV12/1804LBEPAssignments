#include<stdio.h>
#include<conio.h>

int main() {
	char name[20];
	int basic, daper;
	float bonper, loandet, salary;	

	printf("Enter Name: ");
	scanf("%s", name);
	printf("Enter basic: ");
	scanf("%d", &basic);
	printf("Enter daper: ");
	scanf("%d", &daper);
	printf("Enter bonper: ");
	scanf("%f", &bonper);
	printf("Enter loandet: ");
	scanf("%f", &loandet);

	salary = basic + basic * daper / 100 + bonper * basic / 100 - loandet;

	printf("Name\t\tBasic\t\tSalary\t\t\n");
	printf("%-16s", name); printf("%-16d", basic); printf("%d\n", (int)salary);
	//printf("Name: %s\t Basic: %d\t Salary: $%.3f", name, basic, salary);


	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}