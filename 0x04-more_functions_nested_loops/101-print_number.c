#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
@@ -11,7 +12,11 @@ void print_number(int n)
	unsigned int k = n;

	if (n < 0)
		k = n * -1, _putchar('-');
	{
		n *= -1;
		k = n;
		_putchar('-');
	}

	k /= 10;
