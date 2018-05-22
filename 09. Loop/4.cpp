#include<stdio.h>
#include<conio.h>

int main() {
	int max = 5, min = 1, length = 5;
	//a
	for (length = min; length <= max; length++)
	{
		for (int i = min; i <= length; i++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	printf("\n");
	//b
	for (length = max; length >= min; length--)
	{
		for (int i = min; i <= length; i++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
