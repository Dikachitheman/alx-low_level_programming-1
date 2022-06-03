#include <stdio.h>

/**
 * main - Prints base hexadecimal 0123456789abcdef using putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n = '0';
int alp = 'a';

while (n <= '9')
{
putchar(n); /*prints 0-9*/
n++;
}

while (alp <= 'f')
{
putchar(alp); /*prints a-f*/
alp++;
}

putchar('\n');

return (0);
}
