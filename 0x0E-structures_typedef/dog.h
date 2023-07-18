#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Description: This structure represents a dog with its name, age, and owner.
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
