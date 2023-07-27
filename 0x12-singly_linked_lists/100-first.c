#include <stdio.h>

/**
 * pre_main - Function executed before main.
 * This function prints a message before the main function is called.
 * It has the constructor attribute to ensure automatic execution.
 */
void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
