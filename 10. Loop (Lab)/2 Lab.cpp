#include<stdio.h>
#include<conio.h>

int main() {
	int max = 9;
	for (max = 1; max <= 9; max++)
	{
		for (int i = 1; i <= max; i++)
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
