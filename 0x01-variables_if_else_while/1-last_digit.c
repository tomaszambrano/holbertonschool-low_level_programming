#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last dgit of a number
 *
 * Return: Always (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit:%d\n", n % 10);
return (0);
}
