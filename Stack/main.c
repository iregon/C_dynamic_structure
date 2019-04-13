#include <stdio.h>
#include "stack.h"

int main() {
	Stack* s = make_stack(10);
	if (s == NULL) return 1;
	int l = s->length;
	int si = s->size;

	printf("Size: %d, length: %d\n", si, l);

	int num = 10;
	if (push_in_stack(s, (void*)&num) == 0) {
		printf("Element: %d\n", *(int*)(pop_from_stack(s)));
	}

	if (pop_from_stack(s) == NULL) {
		printf("Empty\n");
	}

	int res = change_stack_size(s, 20);

	for (int i = 0; i < s->size; i++)
	{
		printf("Stat %d: %d\n", i, push_in_stack(s, (void*)& num));
	}

	while (get_stack_length(s) > 0) {
		printf("Element: %d\n", *(int*)pop_from_stack(s));
	}

	
	//if (res != 1) {
	//	l = s->length;
	//	si = s->size;
	//	//printf("Size: %d, length: %d, %d\n", si, l, (sizeof(s->elem)/ sizeof(s->elem[0])));
	//	printf("Size: %d, length: %d, %d, %d\n", si, l, (sizeof(*(s->elem))), (sizeof((int*)s->elem[0])));
	//}

	system("PAUSE");
	return 0;
}