#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the main starting point
 * Explain : Gets random number (using putchar) and check its last digit
 * , compare it with 5
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
