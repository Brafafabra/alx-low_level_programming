#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    srand(time(NULL)); // Seed the random number generator with the current time
    char password[11];
    int i;

    for (i = 0; i < 10; i++)
        password[i] = rand() % 94 + 33; // Generate a random ASCII character between 33 and 126

    password[10] = '\0'; // Null-terminate the password string

    printf("%s\n", password); // Print the generated password

    return (0);
}

