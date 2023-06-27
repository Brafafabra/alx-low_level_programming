#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Generates a random valid password for the program 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
    srand(time(NULL)); /* Seed the random number generator with the current time */

    char password[PASSWORD_LENGTH + 1]; /* +1 for the null terminator */
    int i;

    /* Generate random characters for the password */
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        /* Generate a random ASCII character between '!' and '~' */
        password[i] = '!' + (rand() % 94);
    }

    password[PASSWORD_LENGTH] = '\0'; /* Null terminator */

    printf("%s\n", password); /* Print the generated password */

    return 0;
}
