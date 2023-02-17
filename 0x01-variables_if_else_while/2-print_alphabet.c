#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that will assign a random number to the variable n each time it is executed
 * Result: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if ((n % 10) > 5 )
	{
		printf("Last digit of %d is %d and is greater than 5\n");
	}
	else if ((n % 10 ) < 6 && (n % 10 ) != 0 )
	{
		ptintf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	else 
		printf("Last digit of %d is %d and is zero\n");
	return (0);
}
