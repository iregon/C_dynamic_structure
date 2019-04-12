#include <stdio.h>
#include "stack.h"

int main() {
	Stack* s = make_stack(10);
	if (s == NULL) return 1;
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