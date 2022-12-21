#include "main.h"
/**
* _islower - checks lower case characters
* @c: the character to be checked
* Return: 1 for lower case, 0 for others
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
