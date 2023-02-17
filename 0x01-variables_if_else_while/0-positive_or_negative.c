/**
 * Print negative or positive values given value given the value n that will be suppplied when the programme is ran.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * Function main will return zero after a successful operation
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n)
}
/* Returns zero for a successful operation */
return (0);
}
