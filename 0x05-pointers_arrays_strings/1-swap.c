#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;

}

