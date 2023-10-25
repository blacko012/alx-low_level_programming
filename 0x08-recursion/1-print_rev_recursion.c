#include "main.h"
/**
* _print_rev_recursion - function that's will print a string in reverse.
*@s: the parameter string.
*
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
