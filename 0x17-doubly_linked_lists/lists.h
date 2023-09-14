#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct dlistint_st - doubly linked list node structure
 * @n: val
 * @prev: previous node
 * @next: next node
 */
typedef struct dlistint_st
{
	int n;
	struct dlistint_st *prev;
	struct dlistint_st *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif
