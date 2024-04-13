#include <stdio.h>

/**
* main - Entry point, prints all single digit numbers of base 10.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;

while (n <= 9)
{
putchar(n + '0');
n++;
}

putchar('\n');

return (0);
}

/*
This code uses the fact that the ASCII value of '0' is 48, '1' is 49, '2' is 50, and so on up to '9' which is 57.
So, by adding the value of digit to '0', you can convert the integer digit into its corresponding ASCII character
and print it using putchar.
*/
