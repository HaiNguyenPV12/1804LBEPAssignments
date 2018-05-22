#include<stdio.h>
#include<conio.h>

int main() {
	int stars = 0;
	for (stars = 7; stars >= 1; stars--)
	{
		for (int i = 1; i <= stars; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
