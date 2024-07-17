#include <stdio.h >

int main()
{
	int octNum, hexNum;

	printf(" Enter an octal number : ");
	scanf("%o", &octNum);
	printf(" Enter a hexadecimal number : ");
	scanf("%x", &hexNum);
	printf(" Octal : %o, Hexadecimal : %X\n", octNum, hexNum);
	return 0;
}
