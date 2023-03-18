#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char lup;
for (i = '0'; i <= '9'; i++)
putchar(i);
for (lup = 'a'; lup <= 'f'; lup++)
putchar(lup);
putchar('\n');
return (0);
}
