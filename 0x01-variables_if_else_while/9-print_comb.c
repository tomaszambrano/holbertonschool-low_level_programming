#include <stdio.h>

/**
 * main - Prints numbers to char with, and spaces
 *
 * Return: Always (Success)
 */
int main(void)
{
int num;
char c;
for (num = 0; num <= 9; num++)
{
c = num + '0';
putchar(c);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

