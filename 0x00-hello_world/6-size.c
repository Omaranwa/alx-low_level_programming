#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intgerSize;
	long int longIntegerSize;
	long long int longLongIntgerSize;
	char charactersSize;
	float floatSize;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charactersSize));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intgerSize));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longIntegerSize));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longLongIntgerSize));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatSize));
	return (0);
}
