#include <stdio.h> 

/**
 * print_alphabet - prints lower case alphabet
 *
 */

void print_alphabet(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	_putchar('\n');
}
