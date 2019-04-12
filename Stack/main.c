#include <stdio.h>
#include <stdlib.h>

struct stack_struct
{
	int size;
	void** elem;
	int  length;
};

typedef struct stack_struct Stack;

Stack* make_stack(int size) {
	Stack* s = (Stack*)malloc(sizeof(Stack));

	if (s == NULL) return NULL;

	s->size = size;
	s->length = 0;
	s->elem = (void**)malloc(s->size * sizeof(void*));

	return &s;
}

int push(Stack* s, void* elem) {
	if (s->length == s->size) return 1;
	s->elem[s->length] = elem;
	s->length++;
	return 0;
}

void* pop(Stack* s) {
	if (s->length == 0) return NULL;
	return s->elem[--s->length];
}

int length(Stack* s) {
	return s->length;
}

_Bool is_empty(Stack* s) {
	return s->length == 0;
}

int main() {
	Stack* s = make_stack(10);

	int l = s->length;
	int si = s->size;

	printf("Size: %d, length: %d\n", si, l);

	int num = 10;
	if (push(s, (void*)&num) == 0) {
		printf("Element: %d\n", *(int*)(pop(s)));
	}

	if (pop(s) == NULL) {
		printf("Empty\n");
	}

	system("PAUSE");
	return 0;
}