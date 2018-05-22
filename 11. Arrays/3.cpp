#include<stdio.h>
#include<conio.h>

int main() {

	int i, j, k, n;
	int num[6];
	int temp;

	printf("Enter number (34, 45, 56, 67 or 89):\n");
	for (i = 0; i < 5; i++)
	{
		do
		{
			//Ask for number
			printf("Number %d: ", i + 1);
			scanf("%d", &num[i]);
			fseek(stdin, 0, SEEK_END); //flush
			//Checks if number is valid.
			if (num[i] != 34 && num[i] != 45 && num[i] != 56 && num[i] != 67 && num[i] != 89)
			{
				printf("Enter 34, 45, 56, 67 or 89 only.\n");
			}
			//Checks if number is already entered. Asks for a different one.
			for (k = 0; k < i; k++)
			{
				if (num[k]==num[i])
				{
					do
					{
						printf("That number is already entered.\n");
						printf("Enter a different number for %d: ", i+1);
						scanf("%d", &n);
						fseek(stdin, 0, SEEK_END); //flush
						if (n != 34 && n != 45 && n != 56 && n != 67 && n != 89)
						{
							printf("Enter 34, 45, 56, 67 or 89 only.\n");
						}
					} while (n == num[i]);
					num[i] = n;
					k = -1;
				}
			}
		} while (num[i] != 34 && num[i] != 45 && num[i] != 56 && num[i] != 67 && num[i] != 89);

	}
	printf("\n");
	printf("Numbers Entered: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	//Sort array values.
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
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
	printf("Sorted numbers: ");
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
