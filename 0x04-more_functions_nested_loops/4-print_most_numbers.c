#include "main.h"
/**
* print_most_numbers - print numbers from 0 to 9
* Description: prints numbers 2 and 4 inclusive
* Return: the numbers from 0 to 9
*/
void print_most_numbers(void)
{
int s = 0;
for (; s <= 9; s++)
{
if (s == 2 || s == 4)
{
continue;
}
else
{
_putchar(s + '0');
}
}
_putchar('\n');
}
