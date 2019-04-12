struct stack_struct
{
	int size;
	void** elem;
	int  length;
};

typedef struct stack_struct Stack;

Stack* make_stack(int size);

int push(Stack* s, void* elem);

void* pop(Stack* s);

int length(Stack* s);

_Bool is_empty(Stack* s);