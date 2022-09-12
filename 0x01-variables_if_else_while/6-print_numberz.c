#include <stdio.h>

/**
* main - prints the numbers 0-9
*
* Description: Using the main function
* this program prints the numbers between 0-9
* Return: Always 0 (Successful)
*/

int main(void)
{
	int c;
	
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
