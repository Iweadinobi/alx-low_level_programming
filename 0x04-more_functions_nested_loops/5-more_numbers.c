#include "main.h"
/**
* more_numbers - print 10 times the numbers from 0 to 14
* Return: 10 times the numbers from 0 to 14
*/
void more_numbers(void)
{
int t, u;
for (t = 0; t < 10; t++)
{
for (u = 0; u <= 14; u++)
{
if (u > 9)
{
_putchar((u / 10) + '0');
}
_putchar((u % 10) + '0');
}
_putchar('\n');
}
