#include <stdio.h>

/**
 *main - Prints the Alphabet
 *
 *Return: Always (Success)
 */
int main(void)
{
  char ch;
  for (ch = 'a'; ch <= 'z'; ch++)
    {
      if(ch == 'e'  || ch == 'q'){

      }else{
	putchar(ch);
      }

    }

  putchar('\n');
  return (0);
}
