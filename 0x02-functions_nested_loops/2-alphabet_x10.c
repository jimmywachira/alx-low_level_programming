#include "main.h"

/**
 * print_alphabet_x10 - prints x10 alphabet, in lowercase
 * then new line
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		c = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
