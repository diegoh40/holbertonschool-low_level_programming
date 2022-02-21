#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates 
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
int n;
int *p;

n = 402;
p = &n;
_putchar("Value of 'n': %d\n", n);

*p = 98;
_putchar("Value of 'n': %d\n", n);
return (0);
}
