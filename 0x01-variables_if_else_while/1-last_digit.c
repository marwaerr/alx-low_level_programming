#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n, lasted;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  lasted = % 10;
 if (n < 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasted);
 else if (n > 0)
	printf("Last digit of %d is %d and is %s than 5\n", n, n % 10, (n % 10 > 5) ? "greater" : "less");
 else
	printf("Last digit of %d is 0 and is 0\n", n);
    
 return (0);
}

