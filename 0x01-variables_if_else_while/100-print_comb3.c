#include <stdio.h>

/**
 * main - prints 00 - 99 with no duplicate digits: no 11, no 10 (01).
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int ones;
int tens;

for (tens = '0'; tens <= '9'; tens++) /*increment tens*/
{
for (ones = (tens + 1); ones <= '9'; ones++) /*one's ten+1*/
{
putchar(tens);
putchar(ones);

if (tens != '8' || ones != '9')
{
putchar(','); /*prints commas*/
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
