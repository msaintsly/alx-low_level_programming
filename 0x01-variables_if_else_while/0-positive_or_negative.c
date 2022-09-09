/**
 * File: 0-positive_or_negative.c
 *
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*main - Printing numbers and showing whether it positive, negetive or zero.
 *
 * Return: Always 0 (it is successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = read () - RAND_MAX / 2;
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negetive\n", n);
	else printf("%d is zero\n", n);
	
	return (0);
}
