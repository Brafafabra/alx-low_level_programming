/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *str)
{
	char *leet_replace = "aAeEoOtTlL";
	char *leet_encode = "4433007711";
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (leet_replace[j] != '\0')
		{
			if (str[i] == leet_replace[j])
			{
				str[i] = leet_encode[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
