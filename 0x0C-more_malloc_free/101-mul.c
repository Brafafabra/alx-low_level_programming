#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *str);
int _strlen(char *str);
void _multiply(char *num1, char *num2);

/**
 * main - Multiplies two positive numbers
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	_multiply(argv[1], argv[2]);

	return (0);
}

/**
 * _isdigit - Checks if a string consists only of digits
 * @str: The string to check
 *
 * Return: 1 if the string consists only of digits, 0 otherwise
 */
int _isdigit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * _strlen - Computes the length of a string
 * @str: The string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * _multiply - Multiplies two positive numbers and prints the result
 * @num1: The first number
 * @num2: The second number
 */
void _multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result;
	int i, j, k, carry, n1, n2, sum;

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
		exit(98);

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry > 0)
			result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		printf("0\n");
	else
	{
		for (k = i; k < len1 + len2; k++)
			printf("%d", result[k]);
		printf("\n");
	}

	free(result);
}
