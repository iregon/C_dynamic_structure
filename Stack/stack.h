struct stack_struct
{
	int size;
	void** elem;
	int  length;
};

typedef struct stack_struct Stack;

Stack* make_stack(int size);

int push_in_stack(Stack* s, void* elem);

void* pop_from_stack(Stack* s);

int get_stack_length(Stack* s);

_Bool is_stack_empty(Stack* s);

int change_stack_size(Stack* s, int size);