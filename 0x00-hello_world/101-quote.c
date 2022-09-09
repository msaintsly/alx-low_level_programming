#include <unistd.h>

/**
 * main - printing standard text
 *
 * Return: Always 1 (it is successful)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
