#include<stdio.h>
#include<conio.h>

int main() {
	char letter;

	do {
		printf("Type a letter A, B, C, D, F, P or V: ");
		scanf("%c", &letter);
		fseek(stdin, 0, SEEK_END); //flush
		switch (letter)
		{
		case 'A':
		case 'a':
			printf("Ada");
			break;
		case 'B':
		case 'b':
			printf("Basic");
			break;
		case 'C':
		case 'c':
			printf("Cobol");
			break;
		case 'D':
		case 'd':
			printf("dBase III");
			break;
		case 'F':
		case 'f':
			printf("Fortran");
			break;
		case 'p':
		case 'P':
			printf("Pascal");
			break;
		case 'v':
		case 'V':
			printf("Visual C++");
			break;
		default:
			printf("\nPlease enter A, B, C, D, F, P or V.\n");
			break;
		}
	} while (letter != 'a' && letter != 'A' && letter != 'b' && letter != 'B' && letter != 'c' && letter != 'C' && letter != 'd' && letter != 'D' && letter != 'f' && letter != 'F' && letter != 'p' && letter != 'P' && letter != 'v' && letter != 'V');

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
