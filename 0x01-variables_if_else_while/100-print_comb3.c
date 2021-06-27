#include <stdio.h>

/**
 * main - Write a program that prints all possible different combinations of two digits.
 *
 * Return: Always (Success)
 */
int main(void)
{
int num1;
int num2;
for (num1 = '0'; num1 <= '9'; num1++)
{
for (num2 = '1'; num2 <= '9'; num2++)
{
if (((num1 == '0') && (num2 != '0')))
{  
putchar( num1 + 0 );
putchar( num2 + 0 );
putchar(',');
putchar(' ');
}
}
puts("");
return (0);
}

