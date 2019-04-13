#include <stdlib.h>
#include "stack.h"

Stack* make_stack(int size) {
	Stack* s = (Stack*)malloc(sizeof(Stack));

	if (s == NULL) return NULL;

	s->size = size;
	s->length = 0;
	s->elem = (void**)malloc(s->size * sizeof(void*));

	return s;
}

int push(Stack * s, void* elem) {
	if (s->length == s->size) return 1;
	s->elem[s->length] = elem;
	s->length++;
	return 0;
}

void* pop(Stack * s) {
	if (s->length == 0) return NULL;
	return s->elem[--s->length];
}

int length(Stack * s) {
	return s->length;
}

_Bool is_empty(Stack * s) {
	return s->length == 0;
}

int change_size(Stack* s, int size) {
	if (size <= 0) return 1;
	s->elem = (void**)malloc(size * sizeof(void*));
	if (s->elem == NULL) return 1;
	s->size = size;
	return 0;
}
