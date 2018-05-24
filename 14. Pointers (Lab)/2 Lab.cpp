#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>

void vow_con(char *start, char *finish, int *vow, int *con);

int main() {
	int nvow = 0, ncon = 0, size = 0;
	char word[50], *end;
	//char *arr = (char*)malloc(size * sizeof(int));
	printf("Enter Word: ");
	scanf("%s", word);
	size = strlen(word);
	char *arr = (char*)malloc(size * sizeof(int));
	strcpy(arr, word);
	end = &arr[size];
	vow_con(arr, end, &nvow, &ncon);
	printf("Vowels:     %d\n", nvow);
	printf("Consonants: %d\n", ncon);
	free(arr);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}

void vow_con(char *start, char *finish, int *vow, int *con)
{
	char *current;
	for (current = start; current < finish; current++)
	{
		if (*current == 'a' || *current == 'e' || *current == 'i' || *current == 'o' || *current == 'u' || *current == 'A' || *current == 'E' || *current == 'I' || *current == 'O' || *current == 'U')
		{*vow = *vow + 1;}
		else {*con = *con + 1;}
	}
}
