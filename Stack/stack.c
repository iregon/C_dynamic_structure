/**
 * @file stack.c
 * @author Alessandro Tornesello
 * @date 13 aprile 2019
 * @brief Stack management library.
 */

#include <stdlib.h>
#include "stack.h"

stack* make_stack(int size) {
	stack* s = (stack*)malloc(sizeof(stack));

	if (s == NULL) return NULL;

	s->size = size;
	s->length = 0;
	s->elem = (void**)malloc(s->size * sizeof(void*));

	return s;
}

int push_in_stack(stack * s, void* elem) {
	if (s->length == s->size) return 1;
	s->elem[s->length] = elem;
	s->length++;
	return 0;
}

void* pop_from_stack(stack * s) {
	if (s->length == 0) return NULL;
	return s->elem[--s->length];
}

int get_stack_length(stack * s) {
	return s->length;
}

_Bool is_stack_empty(stack * s) {
	return s->length == 0;
}

int change_stack_size(stack* s, int size) {
	if (size <= 0) return 1;
	s->elem = (void**)malloc(size * sizeof(void*));
	if (s->elem == NULL) return 1;
	s->size = size;
	return 0;
}
