#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
    char *duplicate;
    unsigned int length = 0;
    unsigned int i;

    if (str == NULL)
        return NULL;

    /* Calculate the length of the string */
    while (str[length] != '\0')
        length++;

    duplicate = malloc(sizeof(char) * (length + 1)); /* +1 for null terminator */

    if (duplicate == NULL)
        return NULL;

    /* Copy each character to the duplicate string */
    for (i = 0; i < length; i++)
        duplicate[i] = str[i];

    duplicate[length] = '\0'; /* Add null terminator at the end */

    return duplicate;
}
