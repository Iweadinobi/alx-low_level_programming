#include <stdio.h>
/**
* main - prints the sum of multiples of 3 or 5 up to 1024
* Return: Always (Success)
*/
int main(void)
{
int j, q = 0
while (j < 1024)
{
if ((j % 3 == 0) || (j % 5 == 0))
{
q += j;
}
j++;
printf("%d\n", q);
return (0);
}
