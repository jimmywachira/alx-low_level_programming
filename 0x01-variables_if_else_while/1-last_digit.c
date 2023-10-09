#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main file comment goes here
 * betty style doc for function main goes there
 * Returns: 0 on success, or a non-zero value on failure.
 */
int main(void)
{
int b, n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
b = n % 10;
if (n > 0)
{
printf("Last digit of %d is %d and is greater than 5\n", n, b);
}
else if (b < 6 && b != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, b);
}
return (0);
}
