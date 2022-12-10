#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * a program that prints all possible different
 * combinations of two digits
 * Return: 0
 */
int main(void)
{
	int comb;
	int desk = 0;

	while (desk < 10)
	{
		comb = 0;
		while (comb < 10)
		{
			if (desk != comb && desk < comb)
			{
				putchar('0' + desk);
				putchar('0' + comb);

				if (comb + desk != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			comb++;
		}
		desk++;
	}
	putchar('\n');
	return (0);
}
