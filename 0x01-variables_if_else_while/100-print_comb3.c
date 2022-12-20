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
int k, w;
for (k = '0'; k < '9'; k++)
{
for (w = k + 1; w <= '9'; w++)
{
if (w != k)
{
putchar(k);
putchar(w);
if (k == '8' && w == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
