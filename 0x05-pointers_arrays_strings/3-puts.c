#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, fallowed new line
 *@str: string
 * Return: 0
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
