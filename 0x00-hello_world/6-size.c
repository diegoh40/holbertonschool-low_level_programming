#include<stdio.h>

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
   
    printf("Size of a char: %zu byte\n", sizeof(v));
    printf("Size of an int: %zu bytes\n", sizeof(z));
    printf("Size of a long int: %zu bytes\n", sizeof(b));
    printf("Size of a long long int: %zu bytes\n", sizeof(n));
    printf("Size of a float: %zu bytes\n", sizeof(x));
    
    return 0;
}
