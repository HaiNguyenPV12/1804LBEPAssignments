#include<stdio.h>
#include<conio.h>

int main() {
	int age = 0;
	char name[25];
	printf("Enter your age: ");
	scanf("%d", &age);
	fseek(stdin, 0, SEEK_END); //flush
	printf("Enter your name: ");
	scanf("%s", &name);
	for (int i = 1; i <= age; i++)
	{
		printf("%d. %s\n", i, name);
	}
	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
