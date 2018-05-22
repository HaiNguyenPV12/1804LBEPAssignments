#include<stdio.h>
#include<conio.h>

int main() {
	float pi = 3.14159;
	float radius;
	printf("Enter radius of the circle in meters: ");
	scanf("%f", &radius);
	printf("Perimiter of the circle: %.2fm\n", 2 * pi * radius);
	printf("Area of the circle:      %.2fm\n", pi*(radius*radius));

	fseek(stdin, 0, SEEK_END); //flush
	printf("Press Enter to continue.");
	getchar();

	return 0;
}
