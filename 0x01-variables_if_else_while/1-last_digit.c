#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main file 
 * betty style doc for function main goes there
 * Return: 0 on success, or a non-zero value on failure.
 */
int main(void)
{
int x;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
x = n % 10;

if ( x > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else if (m< 6 && m != 0)
{
printf("LAst digit of %s is %d and is less than 6 and not 0\n", n, x);
}
else
{
printf("Last digit of $d is %d and is 0\n", n, x);
}
return (0);
}
