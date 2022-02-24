#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: outputs the difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)

{
while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
    {
s1++;
s2++;
}

if(*s1 == *s2)
{
return 0; // strings are identical
}

else
{
return *s1 - *s2;
}
}
