#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intgerSize;
	long int IntegerSize1;
	long long int IntgerSize2;
	char charSize;
	float floatSize;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charSize));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intgerSize));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(IntegerSize1));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(intgerSize2));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatSize));
	return (0);
}
