#include "main.h"
#include <stdio.h>
/**
* main - prints a fizz buzz program
* Return: Always 0 (Success)
*/
int main(void)
{
int b;
for (b = 1; b <= 100; b++)
{
if ((b % 3 == 0) && (b % 5 == 0))
{
printf("fizzbuzz");
}
else if (b % 3 == 0)
{
printf("fizz");
}
else if (b % 5 == 0)
{
printf("buzz");
}
else
{
printf("%d", b);
}
if (b != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
