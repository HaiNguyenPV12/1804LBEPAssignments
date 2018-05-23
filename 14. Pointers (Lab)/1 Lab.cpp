#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void high_low(int *start, int *finish, int *max, int *min);

int main() {
	int *current, *end, big, small, size = 0;
	printf("Number of numbers:");
	scanf("%d", &size);
	int *arr = (int*)malloc(size * sizeof(int));
	for (current = arr, end = &arr[size]; current < end; current++)
	{
		printf("Enter number: ");
		scanf("%d", current);
	}
	high_low(arr, end, &big, &small);
	printf("Highest value: %d\n", big);
	printf("Lowest value : %d\n", small);
	free(arr);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}

void high_low(int * start, int * finish, int * max, int * min)
{
	int *current;
	*max = *min = *start;
	for (current = start + 1; current < finish; current++) //"start + 1" because we did loop 1 with previous line.
	{
		if (*current > *max)
		{
			*max = *current;
		}
		else if (*current < *min)
		{
			*min = *current;
		}
	}
}
