#include <stdio.h>
/**
* main - prints the first 52 fibonacci numbers
* Return: Nothing.
*/
int main(void)
{
int s = 0;
long t = 1, u = 2;
while (s < 50)
{
if (s == 0)
printf("%ld", t);
else if (s == 1)
printf(", %ld", u);
else
{
u += t;
t = u - t;
printf(", %ld", u);
}
++s;
}
printf("\n");
return (0);
}
