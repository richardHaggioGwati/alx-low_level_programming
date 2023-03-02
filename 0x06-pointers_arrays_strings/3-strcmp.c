/**
* _strcmp -  compares two strings
* @s1: first string to compare
* @s2: second string to compare
* Return: integer value that indicates the relation between the two strings
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(const unsigned char*)s1 - *(const unsigned char*)s2);
}
