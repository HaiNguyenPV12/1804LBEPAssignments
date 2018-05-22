#include<stdio.h>
#include<conio.h>

int main() {
	int x,y;
	printf("Enter x, x will display if it is less than 2000 or greater than 3000: ");
	scanf("%d", &x);
	printf("Enter y, y will display if  it is between 100 and 500               : ");
	scanf("%d", &y);
	if (x < 2000 || x > 3000) { printf("x: %d\n", x); }
	if (y >= 100 && y <= 500) { printf("y: %d\n", y); }

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
