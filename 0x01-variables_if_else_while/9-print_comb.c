#include <stdio.h>

/**
* main - Printing numbers from 0-9
*
* Description: Using the main function
* This program prints 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
* Return: Always 0 (successful)
*/
int main(void)
{
	int c;
	for (c = 48; c<= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	eturn (0);
}
