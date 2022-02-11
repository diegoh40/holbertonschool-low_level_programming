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
   
    printf("Size of int: %zu bytes\n", sizeof(z));
    printf("Size of float: %zu bytes\n", sizeof(x));
    printf("Size of long int: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu byte\n", sizeof(v));
    printf("Size of long long int: %zu bytes\n", sizeof(n));
    
    return 0;
}
