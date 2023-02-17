#include <stdio.h>
/**
 * main - A program that prints the sizeof various type
 * Return: 0 (sucess)
 */

int main(void)
{
	char c;
	int d;
	long int b;
	long long int a;
	float f;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(b));
        printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}


