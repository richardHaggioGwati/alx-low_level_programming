#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * return: starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
    for (int hour = 0; hour < 24; hour++)
{
    for (int minute = 0; minute < 60; minute++)
{
    _putchar("%02d:%02d\n", hour, minute);
}
}
}