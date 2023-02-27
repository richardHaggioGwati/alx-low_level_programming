#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates random valid passwords
* Return: void
*/

#define PASSWORD_LENGTH 6

int main(void)
{
char password[PASSWORD_LENGTH + 1];

const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

srand(time(NULL));
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = charset[rand() % (sizeof(charset) - 1)];
}
password[PASSWORD_LENGTH] = '\0';

printf("%s\n", password);
return 0;
}
