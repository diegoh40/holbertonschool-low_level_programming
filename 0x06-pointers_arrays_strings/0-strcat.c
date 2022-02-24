#include <stdio.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: variable indice
 * @src: variable indice
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{

int len, j;

len = 0;


while (src[len] != '\0')
{
len++;
}
for (j = 0; dest[j] <= '\0'; j++, len++)
{
src[len] = dest[j];
}
src[len] = '\0';

return (dest);
}
