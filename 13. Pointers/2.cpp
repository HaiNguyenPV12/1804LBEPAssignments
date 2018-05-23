#include<stdio.h>
#include<conio.h>
#include<string.h>

char pluralize(char *ptr, size_t size);

int main() {
	char animal[20], bird[20];
	printf("Enter name of animal: ");
	scanf("%[^\n]", animal);
	fseek(stdin, 0, SEEK_END); //flush
	printf("Enter name of bird: ");
	scanf("%[^\n]", bird);
	printf("Plural of animal: "); pluralize(animal, strlen(animal));
	printf("Plural of bird  : "); pluralize(bird, strlen(bird));

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();
	return 0;
}

char pluralize(char *ptr, size_t size)
{
	size = strlen(ptr);
	if (ptr[size - 1] == 's' || ptr[size - 1] == 'x' || ptr[size - 1] == 'z' || ptr[size - 1] == 'o')
	{
		strcat(ptr, "es");
	}
	else if ((ptr[size - 2] == 'c' && ptr[size - 1] == 'h') || (ptr[size - 2] == 's' && ptr[size - 1] == 'h'))
	{
		strcat(ptr, "es");
	}
	else if (ptr[size - 1] == 'y')
	{
		if (ptr[size - 2] == 'a' || ptr[size - 2] == 'e' || ptr[size - 2] == 'i' || ptr[size - 2] == 'o' || ptr[size - 2] == 'u')
		{
			strcat(ptr, "s");
		}
		else
		{
			ptr[size - 1] = '\0';
			strcat(ptr, "ies");
		}
	}
	else if (ptr[size - 1] == 'f' || (ptr[size - 2] == 'f' && ptr[size - 1] == 'e'))
	{
		if ((ptr[size - 2] == 'f' && ptr[size - 1] == 'f') || (ptr[size - 3] == 'f' && ptr[size - 2] == 'f' && ptr[size - 1] == 'e'))
		{
			strcat(ptr, "s");
		}
		else
		{
			if (ptr[size - 1] == 'f')
			{
				ptr[size - 1] = '\0';
				strcat(ptr, "ves");
			}
			else if (ptr[size - 2] == 'f' && ptr[size - 1] == 'e')
			{
				ptr[size - 2] = '\0';
				ptr[size - 1] = '\0';
				strcat(ptr, "ves");
			}
		}
	}
	else
	{
		strcat(ptr, "s");
	}
	printf(ptr);
	putchar('\n');
	return *ptr;
}
