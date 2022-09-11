#include <stdio.h>

/**
* main - program that prints all possible combinations of single-digit numbers
*
* Description: Using mainf function
* this prints all possible combinations of single-digit numbers
* Return: Always 0 (successful)
*/
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
