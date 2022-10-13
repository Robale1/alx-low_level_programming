#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	fprintf(stderr, "Size of a char: %d bytes(s)\n", sizeof(a));
	fprintf(stderr, "Size of a int: %d bytes(s)\n", sizeof(b));
	fprintf(stderr, "Size of a long int: %d bytes(s)\n", sizeof(c));
	fprintf(stderr, "Size of a long long int: %d bytes(s)\n", sizeof(d));
	fprintf(stderr, "Size of a float: %d bytes(s)\n", sizeof(e));
	return (0);
}

