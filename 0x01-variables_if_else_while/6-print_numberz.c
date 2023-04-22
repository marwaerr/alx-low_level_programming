#include <stdio.h>

/*
 * main - prints the alphabet in lowercase followed by the alphabet in uppe followed by the alphabet in upperr
 * Return: Always 0 (Success)
 */

int main(void)
{
int num;

for (num = 0; num < 10; num++)
	putchar(num + '0');
putchar('\n');

return (0);
}
