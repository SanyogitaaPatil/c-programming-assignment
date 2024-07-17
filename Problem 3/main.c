#include <stdio.h>

int main()
{
    int age;

    printf(" Enter your age : ");
    scanf("%d", &age); // & is address of operator
    printf("You are %d years old .\n", age);
    return 0;
}
