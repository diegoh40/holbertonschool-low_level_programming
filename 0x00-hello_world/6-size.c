#include <stdio.h>

/**
 * main - display size of various types
 * Return: 0
 */
int main(void)
{
int z;
float x;
char v;
long int b;
long long int n;
printf("Size of a char: %d byte(s)\n", sizeof(v));
printf("Size of an int: %d byte(s)\n", sizeof(z));
printf("Size of a long int: %d byte(s)\n", sizeof(b));
printf("Size of a long long int: %d byte(s)\n", sizeof(n));
printf("Size of a float: %d byte(s)\n", sizeof(x));
return (0);
}
