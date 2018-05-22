#include<stdio.h>
#include<conio.h>

int main() {
	int s, m = 3, n = 5, r, t;
	float x = 3.0, y;
	
	t = n / m;
	printf("t = n / m         = %d", t);
	
	r = n % m;
	printf("\nr = n % m           = %d", r);
	
	y = n / m;
	printf("\ny = n / m         = %f", y);
	
	t = x * y - m / 2;
	printf("\nt = x * y - m / 2 = %d", t);
	
	x = x * 2.0;
	printf("\nx = x * 2.0       = %f", x);
	
	s = (m + n) / r;
	printf("\ns = (m + n) / r   = %d", s);
	
	y = --n;
	printf("\ny = --n           = %f", y);



	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}