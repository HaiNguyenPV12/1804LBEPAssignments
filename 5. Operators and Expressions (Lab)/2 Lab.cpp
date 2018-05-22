#include<stdio.h>
#include<conio.h>

int main() {
	float centimeters, feet, inches;
	printf("Enter value in centimeters: ");
	scanf("%f", &centimeters);

	inches = centimeters/2.54;
	feet = inches/12;

	printf("%.1f centimeters is %.1f feet\n", centimeters, feet);
	printf("%.1f centimeters is %.1f inches\n", centimeters, inches);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}