#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
    char *concatenated;
    int i, j, total_len = 0, k = 0;

    if (ac == 0 || av == NULL)
        return NULL;

    /* Calculate the total length of the arguments */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_len++;
        total_len++; /* +1 for newline character */
    }

    concatenated = malloc(sizeof(char) * (total_len + 1)); /* +1 for null terminator */

    if (concatenated == NULL)
        return NULL;

    /* Copy the arguments to the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            concatenated[k] = av[i][j];
            k++;
        }
        concatenated[k] = '\n';
        k++;
    }

    concatenated[k] = '\0'; /* Add null terminator at the end */

    return concatenated;
}
