#include <stdio.h>

/**
 * reset_to_98 - Updates the value of an integer to 98.
 * @n: Pointer to an integer.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 402;

	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);

	return (0);
}
