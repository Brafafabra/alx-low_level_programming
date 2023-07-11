#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
    int count = 0, i = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            count++;
            while (str[i] != ' ' && str[i] != '\0')
                i++;
        }
        else
        {
            while (str[i] == ' ')
                i++;
        }
    }

    return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k = 0, len, count;

    if (str == NULL || str[0] == '\0')
        return NULL;

    count = count_words(str);
    if (count == 0)
        return NULL;

    words = malloc(sizeof(char *) * (count + 1));
    if (words == NULL)
        return NULL;

    for (i = 0; i < count; i++)
    {
        while (str[k] == ' ')
            k++;
        len = 0;
        while (str[k + len] != ' ' && str[k + len] != '\0')
            len++;

        words[i] = malloc(sizeof(char) * (len + 1));
        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return NULL;
        }

        for (j = 0; j < len; j++)
            words[i][j] = str[k++];
        words[i][j] = '\0';
    }

    words[i] = NULL;

    return words;
}
