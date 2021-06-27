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
if(num == '9')
{
putchar(num);
}
else
{
putchar(num);
putchar(',');
putchar(' ');
}
}
puts("");
return (0);
}
