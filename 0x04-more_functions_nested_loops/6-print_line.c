#include "main.h"
/**
* print_line - draws a straight line
* @n: the number of lines to draw
* Return: empty
*/
void print_line(int n)
{
int e;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (e = 0; e < n; e++)
{
_putchar(95);
}
_putchar('\n');
}
}
