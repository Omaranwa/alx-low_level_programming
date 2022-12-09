#include <stdio.h>

/**
* main - main block of code
* we need to print the alphabet in lowercase from
* z - a - using for loop , letter = z , if bigger
* than a , use putchar , loop until letter <= a 
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
