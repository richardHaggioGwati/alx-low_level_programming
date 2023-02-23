#include <stdio.h>
#include <math.h>

/**
* main -  prints the largest prime factor of the number 612852475143
* followed by a new line.
* Return: result of the operation
*/

int main(void) {
long n = 612852475143;
long largest_factor = 1;
int i;

while (n % 2 == 0)
{
largest_factor = 2;
n /= 2;
}

for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0) {
largest_factor = i;
n /= i;
}
}

if (n > 2)
{
largest_factor = n;
}
printf("%ld\n", largest_factor);

return 0;
}
