#include <stdio.h >

int main()
{
	char grade;

	printf(" Enter your grade : ");
	scanf(" %c", &grade); // note the space before %c
	printf(" Your grade is %c.\n", grade);
	return 0;
}