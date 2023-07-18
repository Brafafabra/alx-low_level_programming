#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int name_len, owner_len;

    /* Calculate the lengths of name and owner */
    name_len = strlen(name);
    owner_len = strlen(owner);

    /* Allocate memory for the new dog structure */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    /* Allocate memory for the name and owner strings */
    new_dog->name = malloc((name_len + 1) * sizeof(char));
    new_dog->owner = malloc((owner_len + 1) * sizeof(char));
    if (new_dog->name == NULL || new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return NULL;
    }

    /* Copy the name and owner strings */
    strncpy(new_dog->name, name, name_len);
    new_dog->name[name_len] = '\0';
    strncpy(new_dog->owner, owner, owner_len);
    new_dog->owner[owner_len] = '\0';

    /* Assign the age of the dog */
    new_dog->age = age;

    return new_dog;
}
