#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

	int i = 0, numconsonant = 0, numvowel = 0;
	char word[150];
	printf("Write a word: \n");
	scanf("%s", &word);
	for (i = 0; i <= 150; i++)
	{
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
		{numvowel = numvowel + 1;}
		else if(word[i] >= 'a' && word[i] <= 'z' || word[i] >= 'A' && word[i] >= 'Z')
		{ numconsonant = numconsonant + 1; }
	}
	printf("Number of vowels    : %d\n", numvowel);
	printf("Number of consonants: %d\n", numconsonant);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
