#include "_putchar.h"
/**
 * main - Prints "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0 for success
 */
int main(void)
{
	char _putchar[] = "_putchar";
	int i = 0;

	while (_putchar[i] != '\0')
	{
		_putchar(_putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
