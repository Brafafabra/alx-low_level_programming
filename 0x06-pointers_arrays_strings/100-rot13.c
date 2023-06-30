/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *str)
{
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13key = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alphabet[j] != '\0')
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13key[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
