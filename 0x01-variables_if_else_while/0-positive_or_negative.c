#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Enter poin
 *
 * Return
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
		printf("%s", "is positive\n");
	if (n < 0)
		printf("%s", "is negative\n");
	if (n == 0)
		printf("%s", "is zero\n");
	return (0);
}
