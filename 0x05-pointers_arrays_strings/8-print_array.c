#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements in the array
 * @a: array to print
 * @n: elements to print
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
int b = 0;

while (b < n)
{
printf("%d", a[b]);
if (b < (n - 1))
printf(", ");
b++;
}
printf("\n");
}
