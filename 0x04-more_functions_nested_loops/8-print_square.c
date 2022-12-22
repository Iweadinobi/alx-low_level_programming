#include "main.h"
/**
* print_square - prints n squares, n number of times
* @size: number of squares/number of times
* Return: empty
*/
void print_square(int size)
{
int q, r;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (q = 0; q < size; q++)
{
for (r = 0; r < size; r++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
