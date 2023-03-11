#include <stdio.h>
#include <string.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */


int main(argc, char *argv[])
{
	int num1, num2, mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		mul = num1 * num2;
	}
	return (mul);
}
