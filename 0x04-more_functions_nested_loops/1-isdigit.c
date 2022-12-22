#include "main.h"
/**
* _isdigit - check if a character is a digit
* @h: the character to be checked
* Return: 1 for a digit, 0 for others
*/
int _isdigit(int h)
{
if (h >= 48 && h <= 57)
{
return (1);
}
return (0);
}
