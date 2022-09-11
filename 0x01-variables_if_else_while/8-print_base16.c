#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Description: Using the main function
 * this program prints all the numbers of base 16 in lowercase
 * Return: Always 0 (sucessful)
 */
int main(void)
{
	char c;
	for (c  = '0'; <= '9'; c++)
		putchar(c);
	for (c = 's'; <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
