#include <stdio.h>
#include "main.h"

/**
 * _puts - swaps the values of two integers
 *@str: firt integer
 * Return: 0
 */
void _puts(char *str)
{
_putchar("%s\n", str);
_puts(str);
return (str);

}
