#include "main.h"
/**
*main-printal_alphabet
*Return:0

*/
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putcha(c);
		c++;
	}
	_putchar('\n');
}

