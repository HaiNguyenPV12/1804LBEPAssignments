#include<stdio.h>
#include<conio.h>

int main() {
	int iResult, a = 10, b = 8, c = 6, d = 5, e = 2;
	iResult = a - b - c - d;
	printf("iResult = a - b - c - d          = %d\n", iResult);
	iResult = a - b + c - d;
	printf("iResult = a - b + c - d          = %d\n", iResult);
	iResult = a + b / c / d;
	printf("iResult = a + b / c / d          = %d\n", iResult);
	iResult = a + b / c * d;
	printf("iResult = a + b / c * d          = %d\n", iResult);
	iResult = a / b * c * d;
	printf("iResult = a / b * c * d          = %d\n", iResult);
	iResult = a % b / c * d;
	printf("iResult = a %% b / c * d          = %d\n", iResult);
	iResult = a % b % c % d;
	printf("iResult = a %% b %% c %% d          = %d\n", iResult);
	iResult = a - (b - c) - d;
	printf("iResult = a - (b - c) - d        = %d\n", iResult);
	iResult = (a - (b - c)) - d;
	printf("iResult = (a - (b - c)) - d      = %d\n", iResult);
	iResult = a - ((b - c) - d);
	printf("iResult = a - ((b - c) - d)      = %d\n", iResult);
	iResult = a % (b % c) * d * e;
	printf("iResult = a %% (b %% c) * d * e    = %d\n", iResult);
	iResult = a + (b - c) * d - e;
	printf("iResult = a + (b - c) * d - e    = %d\n", iResult);
	iResult = (a + b) * c + d * e;
	printf("iResult = (a + b) * c + d * e    = %d\n", iResult);
	iResult = (a + b) * (c / d) % e;
	printf("iResult = (a + b) * (c / d) %% e  = %d\n", iResult);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}