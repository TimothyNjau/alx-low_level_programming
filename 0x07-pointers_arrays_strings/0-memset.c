/**
 * _memset - a function that fills
 *         memory with a constant byte
 *
 * @x: input pointer to char type
 *    represents the pointer to the
 *    block of memory to fill
 * @y: input variable of char type
 *    represents the character to
 *    fill x
 * @n: unsigned int variable
 *    the number of bytes to be filled
 *
 * Return: A pointer to the filled memory
 *         area @x
*/

char *_memset(char *x, char y, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		x[i] = y;

	return (x);
}
