#include <stdio.h>

/**
 * main - Prints possible combinations of two two-digit numbers
 *
 * Description: Using the main function
 * this program prints all possible combinations of two two-digit numbers
 * Return: Always 0 (successful)
 */
int main(void)
{
	int i, p;

	for (i = 0; i < 100; i++)
	{
		for (p=0; p < 100; p++)
		{
			if (p > i)
			{
				putchar((i / 100) + '0');
				putchar((i % 100) + '0');
				putchar(' ');
				putchar((p / 100) + '0');
				putchar((p % 100) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}

			}
		
		}
		putchar('\n');
		return (0)

}
