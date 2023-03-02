/**
* leet - encodes a string into 1337
* @str: string to encode
* Return: coded string
*/

char *leet(char *str)
{
char *p = str;

int i;

char leet_chars[] = "aAeEoOtTlL";

char leet_nums[] = "44330771";

while (*p)
{
for (i = 0; i < 10; i++)
{
if (*p == leet_chars[i])
{
*p = leet_nums[i];
break;
}
}
p++;
}
return (str);
}
