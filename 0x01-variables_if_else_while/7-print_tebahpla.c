#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Description: Using the main function
 * this program prints the lowercase alphabet in reverse
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
