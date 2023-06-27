#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1; /* Sign of the number */
	int result = 0; /* Resulting integer */

	/* Skip whitespace characters */
	while (*s == ' ')
		s++;

	/* Handle the sign */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/* Convert the string to an integer */
	while (*s >= '0' && *s <= '9')
	{
		/* Check for overflow */
		if (result > (result * 10 + (*s - '0')))
		{
			/* Overflow detected, return minimum or maximum value */
			return (sign == -1) ? -2147483648 : 2147483647;
		}
		result = result * 10 + (*s - '0');
		s++;
	}

	/* Apply the sign */
	return result * sign;
}

/**
 * main - Test the _atoi function.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);

	return 0;
}
