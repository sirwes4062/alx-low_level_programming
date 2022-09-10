#include <stdio.h>

/**
 * main - this is the entry point of the program
 * description - Write a C program that prints the size types
 * Return: 0
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(d));
printf("size of a int: %lu byte(s)\n", (unsigned long) sizeof(a));
printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(b));
printf(" long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}

