#include <stdio.h >

int main()
{
	char ch;

	printf(" Enter a character : ");
	scanf(" %c", &ch); // Note the space before %c
	getchar();		   // Consume the newline character
	printf("You entered : %c\n", ch);
	return 0;
}
