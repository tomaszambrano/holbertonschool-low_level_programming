#include <stdio.h>

/**
 * main - Prints numbers to char with, and spaces
 *
 * Return: Always (Success)
 */
int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

