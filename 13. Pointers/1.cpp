#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>

int main() {

	int length = 0, check = 0;
	char *ptr = (char*)malloc(length * sizeof(int));
	printf("Enter any string to check if it is palidronic: ");
	scanf("%s", ptr);
	length = strlen(ptr);
	for (int i = 0; i < (length/2); i++)
	{
		if (*(ptr + i) != *(ptr + length - i - 1))
		{check = 0; break;}
		else { check = 1; }
	}
	free(ptr);
	if (check == 1) { printf("string is palindrone.\n"); }
	else { printf("string is not palindrone.\n"); }	

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
