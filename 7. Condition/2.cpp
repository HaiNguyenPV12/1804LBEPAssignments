#include<stdio.h>
#include<conio.h>

int main() {
	int a, b;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	if (a*b>=1000) { printf("Product is greater than 1000\n"); }
	else { printf("Product is not greater than 1000\n"); }

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
