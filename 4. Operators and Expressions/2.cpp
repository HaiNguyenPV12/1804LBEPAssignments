#include<stdio.h>
#include<conio.h>

int main() {
	int a = 10, b = 7, d = 4, e = 2;
	float c = 15.75, f = 5.6, z;
	z = a * b + (c / d) - e * f;
	printf("a=10\nb = 7\nc = 15.75\nd = 4\ne = 2\nf = 5.6\n\n");
	printf("z = a*b+(c/d)-e*f\n");
	printf("z = %f\n", z);
	

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}