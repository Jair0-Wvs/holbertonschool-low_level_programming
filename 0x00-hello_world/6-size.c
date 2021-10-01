#include<stdio.h>
int main(void)
{
	int intType;
	float floatType;
	long long int longlongintType;
	char charType;
	long int longintType;

	printf("Size of a char: %zu bytes(s)\n", sizeof(charType));
	printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
