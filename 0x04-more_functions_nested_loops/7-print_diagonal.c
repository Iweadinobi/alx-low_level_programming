#include "main.h"
/**
* print_diagonal - draws diagonal lines
* @n: number of times to print diagonal lines
* Return: empty
*/
void print_diagonal(int n)
{
int f, h;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (f = 0; f < n; f++)
{
for (h = 0; h < f; h++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
