#include<stdio.h>
#include<conio.h>

int main() {
	int marks;	

	do {
		printf("Enter marks: ");
		scanf("%d", &marks);

		if (marks < 0 || marks>100)
		{
			printf("Please enter number between 0 and 100.\n");
		}
		else if (marks > 75) { printf("Grade: A."); }
		else if (marks < 75 && marks > 60) { printf("Grade: B."); }
		else if (marks < 60 && marks > 45) { printf("Grade: C."); }
		else if (marks < 45 && marks > 35) { printf("Grade: D."); }
		else { printf("Grade: E."); }
	} while (marks < 0 || marks>100);

	fseek(stdin, 0, SEEK_END); //flush
	printf("\nPress Enter to continue.");
	getchar();

	return 0;
}
