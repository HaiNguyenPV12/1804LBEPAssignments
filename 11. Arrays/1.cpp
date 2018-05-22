#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	
	int i, j;
	char name[7][10] = { "George", "Albert" ,"Tina","Xavier","Roger","Tim","William" };
	char temp[7];

	for (i = 0; i <= 6; i++)
	{
		for (j = i + 1; j <= 6; j++)
		{
			if (strcmp(name[i], name[j]) > 0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	for ( i = 0; i < 7; i++)
	{
		printf("%d. %s\n", i+1, name[i]);
	}

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
