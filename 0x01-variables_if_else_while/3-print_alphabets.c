#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (Success)
 */
int main(void)
{
char lup;
for (lup = 'a'; lup <= 'z'; lup++)
putchar(lup);
for (lup = 'A'; lup <= 'Z'; lup++)
putchar(lup);
putchar('\n');
return (0);
}
