#include "main.h"
/**
* print_last_digit - prints last digit of a number
* @n: the numbers to be printed
* Return: value of the last of a number
*/
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last);
return (last);
}
