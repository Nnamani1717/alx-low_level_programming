#include "Main.h"
/**
 * puts2 - print every other character of a string
 * @str: the string to be treated
 * Retrun: void
 */
void puts2(char *str)
{
	int i;
	int j;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
