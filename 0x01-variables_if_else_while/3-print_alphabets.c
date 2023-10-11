#include <stdio.h>
/**
 * main - main file comment goes here
 * betty style doc for function main goes there
 * Returns: 0 on success, or a non-zero value on failure.
 */
int main(void)
{
char c, d;
c = 'a';
d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
