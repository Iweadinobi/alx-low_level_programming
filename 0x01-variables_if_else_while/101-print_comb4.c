#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int l, m, n;
for (l = '0'; l < '9'; l++)
{
for (m = l + 1; m <= '9'; m++)
{
for (n = m + 1; n <= '9'; n++)
{
if ((m != l) != n)
{
putchar(l);
putchar(m);
putchar(n);
if (l == '7' && m == '8')
continue;
putchar(',');
putchar(' ')
}
}
}
}
putchar(0);
return (0);
}
