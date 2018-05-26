#include<stdio.h>
#include<conio.h>

double Radius();
void AreaAndPerim(double radius);


int main() {
	AreaAndPerim(Radius());

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}

double Radius()
{
	double r;
	printf("Enter radius: ");
	scanf("%lf", &r);
	return r;
}

void AreaAndPerim(double radius)
{
	double a, p;
	a = (radius)*(radius)*3.14;
	p = radius * 2 * 3.14;
	printf("Area:      %.2fm^2\n", a);
	printf("Perimeter: %.2fm\n", p);
}
