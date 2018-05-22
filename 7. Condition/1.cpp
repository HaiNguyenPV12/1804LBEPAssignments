#include<stdio.h>
#include<conio.h>

int main() {
	int a, b;
	printf("Enter number a: ");
	scanf("%d", &a);
	printf("Enter number b: ");
	scanf("%d", &b);
	if (a%b == 0) { printf("a is divisible by b\n"); }
	else { printf("a is not divisible by b\n"); }

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
