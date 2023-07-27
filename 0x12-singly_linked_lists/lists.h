#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Structure for singly linked list */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
