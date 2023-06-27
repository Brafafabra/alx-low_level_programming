#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Check for leading whitespace */
	while (s[i] == ' ')
		i++;

	/* Check for sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Convert string to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}

/**
 * main - Check the code
 *
 * Return: Always 0
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

	return (0);
}
