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
int l, m;
for (l = 0; l <= 98; l++)
{
for (m = l + 1; m <= 99; m++)
{
putchar((l / 10) + '0')
putchar((l % 10) + '0');
putchar(' ');
putchar((m / 10) + '0');
putchar((m % 10) + '0');
if (l == 98 && m == 99)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n')
return (0);
}
