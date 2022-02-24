#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: integer array will be reversed
 * @n: lenght od array
 */
void reverse_array(int *a, int n)
{
int i = 0;
int rev;
n = n - 1;
while (i < n)
{
rev = a[i];
a[i] = a[n];
a[n] = rev;
i++;
n--;
}
}
