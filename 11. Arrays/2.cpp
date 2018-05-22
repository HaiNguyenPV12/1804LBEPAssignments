#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

	int i = 0, j = 0, numvowel = 0;
	char line[150];
	printf("Write a line of text: \n");
	scanf("%[^\n]", &line);
	for ( i = 0; i <= 150; i++)
	{
		if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
		{numvowel = numvowel + 1;}
	}
	printf("Number of vowels: %d", numvowel);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
