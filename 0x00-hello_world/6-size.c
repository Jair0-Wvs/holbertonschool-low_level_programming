#include<stdio.h>
int main(void)
{
	int intType;
	float floatType;
	long long int longlongintType;
	char charType;
	long int longintType;
/**
 *  sizeof evaluates the size of a variable
 */
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
	printf("Size of float: %zu byte\n", sizeof(floatType));

	return (0);
}
