#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - assigns a zero
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
        int n;
        int n = 0;
	if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else if (n < 0)
                printf("%d is negative\n", n);
        return (0);
}
