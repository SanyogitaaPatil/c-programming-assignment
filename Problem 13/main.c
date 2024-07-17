#include <stdio.h >

int main()
{
	char city[50];

	printf(" Enter your city : ");
	scanf("%[^\n]", city);
	printf("You live in %s.\n", city);
	return 0;
}