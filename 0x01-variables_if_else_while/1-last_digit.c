#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int end;
	char d[13] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	end = n % 10;
	printf("%s %d %s %d ", d, n, "is", end);
	if (end > 5)
		printf("%s\n", "and is greater tham 5");
	if (end == 0)
		printf("%s\n", "and is 0");
	else
		printf("%s\n", "and id less than 6 and not 0");
	return (0);

}
