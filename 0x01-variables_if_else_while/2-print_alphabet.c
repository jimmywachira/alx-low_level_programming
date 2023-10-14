#include <stdio.h>
/**
 * main - A program
 * Return: 0 on success, or a non-zero value on failure.
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
