#include <stdio.h>
/**
 *main -Entry point
 *Description: 'Print alphabets lowercase'
 *Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	/* Indicate that the main function returns 0 */
	return (0);
}
