#include <stdio.h>

/**
* main - main block of code 
* we have to print num from 0 - 10
* with using only (putchar) - so as we
* Have seen before using for loop - 
* if digit is less than 10 - putchar it 
* check agian - if >= 10 then end loop
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);
}
