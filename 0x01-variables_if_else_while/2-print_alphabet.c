#include <stdio.h>
/**
 * Function to print alphabet in lowercase using `putchar`
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
