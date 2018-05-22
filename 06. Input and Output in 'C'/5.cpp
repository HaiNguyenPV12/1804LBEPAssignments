#include<stdio.h>
#include<conio.h>

int main() {
	char firstname[10], lastname[10];
	printf("Enter first name: ");
	scanf("%s", firstname);
	printf("Enter last name: ");
	scanf("%s", lastname);
	printf("Last name, first name: %s, %s", lastname, firstname);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}