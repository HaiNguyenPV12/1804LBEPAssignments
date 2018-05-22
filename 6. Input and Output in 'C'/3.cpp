#include<stdio.h>
#include<conio.h>

int main() {
	int breadth;
	float length, height;
	scanf("%d %f %f", &breadth, &length, &height);
	printf("%d %f %6.2e", breadth, length, height);


	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}