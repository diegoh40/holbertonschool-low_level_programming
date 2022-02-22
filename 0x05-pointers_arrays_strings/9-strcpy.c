#includex "main.h"

/**
 * _strcpy - copies string pointed to by src to buffer (dest)
 * @dest: destination
 * @src: source
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}
