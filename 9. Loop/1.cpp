#include<stdio.h>
#include<conio.h>

int main() {
	for (int i = 100; i > 0; i-=5)
	{
		printf("%d\n", i);
	}

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
