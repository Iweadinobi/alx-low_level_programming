#include "main.h"
#include <stdio.h>
/**
*print_number - prints an integer
* @n: the integer to be printed
* Return: nothing
*/
void print_number(int n)
{
unsigned int o = n;
if (n < 0)
{
n *= -1;
o = n;
_putchar('-');
}
o /= 10;
if (o != 0)
print_number(o);
_putchar((unsigned int) n % 10 + '0');
}
