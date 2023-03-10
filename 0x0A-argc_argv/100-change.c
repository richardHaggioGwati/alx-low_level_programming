#include <stdio.h>
#include <stdlib.h>

/**
 * calculateCoins - calculates the minimum number of coins
 * @cents: the amount in cents
 * Return: coins required
 */
int calculateCoins(int cents)
{
int coins = 0;

while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
}
else if (cents >= 10)
{
cents -= 10;
}
else if (cents >= 5)
{
cents -= 5;
}
else if (cents >= 2)
{
cents -= 2;
}
else
{
cents -= 1;
}
coins++;
}

return (coins);
}

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument array
 * Return: it's name
 */

int main(int argc, char *argv[])
{
int cents, coins;

if (argc != 2)
    {
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}
coins = calculateCoins(cents);
printf("%d\n", coins);
return (0);
}
