#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number assigned to variable n
 * Description: the program also indicates whether the random number is  
 * positive or not
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	  {
	    printf("%d is positive\n", n);
	  }
	else if (n == 0)
	  {
	    printf("%d is zero\n", n);
	  }
	else if (n < 0)
	  {
	    printf("%d is negative\n", n);
	  }
	return (0);
}
