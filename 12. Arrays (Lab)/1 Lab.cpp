#include<stdio.h>
#include<conio.h>

int main() {

	int i, j;
	int num[10];
	int temp;
	int n;

	printf("Enter 10 numbers:\n");
	for (i = 0; i < 10; i++)
	{
		printf("Number %2d: ", i + 1);
		scanf("%d", &num[i]);
	}
	printf("\n");
	printf("Numbers Entered: ");
	for (i = 0; i < 10; i++)
	{ printf("%d ", num[i]); }
	printf("\n");
	//Sort array values.
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (num[i] < num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	//Print sorted numbers.
	printf("Highest value: %d\n", num[0]);
	printf("Lowest value : %d\n", num[9]);
	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
