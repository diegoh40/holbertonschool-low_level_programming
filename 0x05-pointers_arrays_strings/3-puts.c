#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *@str: string
 * Return: 0
 */
void _puts(char *str)
{
while (*str)
  
_putchar(*str++);
_puts('\n');

}
