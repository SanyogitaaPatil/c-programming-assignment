#include <stdio.h >

int main()
{
    printf("%-10s %5s\n", "Name", "Age"); // Note -
    printf("%-10s %5d\n", "Alice", 25);
    printf("%-10s %5d\n", "Bob", 30);
    return 0;
}