#include<stdio.h>
#include<conio.h>

int main() {
	int sum;
	float discount_rate, dump;
	char letter = 't';

	printf("Enter sum: ");
	scanf("%d", &sum);
	fseek(stdin, 0, SEEK_END); //flush
	printf("Enter discount rate: ");
	scanf("%f", &discount_rate);

	dump = sum - (sum * (discount_rate / 100)); //no idea what dump means
	printf("Sum: %d", sum);
	printf("\nWelcome");
	printf("\nletter: %c", letter);
	printf("\nDiscount: %f", discount_rate);
	printf("\ndump: %f", dump);


	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}