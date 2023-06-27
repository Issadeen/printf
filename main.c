#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count = _printf("Hello, %s! The answer is %d%%.\n", "Alice", 42);
	printf("Characters printed: %d\n", count);

	return (0);
}
