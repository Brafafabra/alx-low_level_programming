#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the content of a struct dog
 * @d: Pointer to the struct dog variable
 *
 * Description: This function prints the contents of a struct dog.
 *              If any member is NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
