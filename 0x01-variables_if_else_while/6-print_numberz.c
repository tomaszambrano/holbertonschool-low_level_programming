#include <stdio.h>

/**
 *main - Prints all digit base 10
 *
 *Return: Always (Success)
 */
int main(void)
{
  int num;
  char c;
  printf("%c",c);
  for (num = 0; num <= 9; num++)
    {
      c=num+'0';
      putchar (c);
    }
  printf("\n");
  return (0);
}
