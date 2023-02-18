#include <stdio.h>

/**
 *main -> print the base 10 of numbers
 *then end following by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
        int a;

        for (a = 0; a < 10; a++)
        {
                putchar(a + "0");
        }
        printf("\n");
        return (0);
}
