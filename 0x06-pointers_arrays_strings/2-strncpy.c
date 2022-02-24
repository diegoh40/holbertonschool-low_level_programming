#include "main.h"

/**
 * _strncpy - copies n bytes of src to the dest string
 * @dest: string to copy to
 * @src: string being copied
 * @n: largest number of bytes to copy
 *
 * Return: address of dest
 */



char *_strncpy(char *dest, char *src, int n)

{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return dest;

}
