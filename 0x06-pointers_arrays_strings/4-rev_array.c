/**
* reverse_array - reverses the content of an array of integers
* @a: array
* @n: the number of elements of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
int temp;

for (int i = 0; i < n/2; i++)
{
temp = a[i];
a[i] = a[n-1-i];
a[n-1-i] = temp;
}
}