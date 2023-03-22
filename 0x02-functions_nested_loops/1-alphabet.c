#include "main.h"
/**
 * print_alphabet - prints all alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char order;

	for (order = 'a'; order <= 'z'; order++)
		_putchar(order);
	_putchar('\n');
}
