#include<stdio.h>
#include<conio.h>

int main() {
	int a, b;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	if (a - b == a ) { printf("Difference is equal to 1st number: %d\n", a); }
	else if (a - b == b) { printf("Difference is equal to 2nd number: %d\n", b); }
	else { printf("Difference is not equal to any of the values entered."); }

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
