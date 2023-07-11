#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    unsigned int len1 = 0, len2 = 0;
    unsigned int i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the lengths of the strings */
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    concatenated = malloc(sizeof(char) * (len1 + len2 + 1)); /* +1 for null terminator */

    if (concatenated == NULL)
        return NULL;

    /* Copy the characters from s1 to the concatenated string */
    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    /* Copy the characters from s2 to the concatenated string */
    for (j = 0; j < len2; j++)
        concatenated[i++] = s2[j];

    concatenated[i] = '\0'; /* Add null terminator at the end */

    return concatenated;
}
