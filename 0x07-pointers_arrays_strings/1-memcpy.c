/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we will copy to
 * @src: what we are to copy
 * @x: x bytes of @src
 *
 * Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int x)
{
	unsigned int i;

	for (i = 0; i < x; i++)
		dest[i] = src[i];
	return (dest);
}
