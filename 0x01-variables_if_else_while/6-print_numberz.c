#include <stdio.h>

/**
 *main -> print the base 10 of numbers
 *then end following by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
