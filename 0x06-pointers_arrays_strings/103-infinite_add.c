#include <stdio.h>
#include <string.h>

/**
* _strncpy -  adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer 
* @size_r: is the buffer size
* Return: return value
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);

int len2 = strlen(n2);

int carry = 0;

int i = len1 - 1;

int j = len2 - 1;

int k = size_r - 1;
    
r[k--] = '\0';
    
while (i >= 0 && j >= 0)
{
int sum = (n1[i--] - '0') + (n2[j--] - '0') + carry;
carry = sum / 10;
r[k--] = (sum % 10) + '0';
}

while (i >= 0)
{
int sum = (n1[i--] - '0') + carry;
carry = sum / 10;
r[k--] = (sum % 10) + '0';
}

while (j >= 0)
{
int sum = (n2[j--] - '0') + carry;
carry = sum / 10;
r[k--] = (sum % 10) + '0';
}

if (carry != 0 && k >= 0)
{
r[k--] = carry + '0';
}
    
if (k < -1)
{
return 0;
}

memmove(r, &r[k+1], size_r - (k+1));
    
return (r);
}
