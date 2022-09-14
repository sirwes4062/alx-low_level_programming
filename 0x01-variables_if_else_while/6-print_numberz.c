#include <stdio.h>

/**
 * main - prints all the single digits numbers of base q0 starting from 0
 * only using putchar without char variables
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
