typedef struct linked_node_struct {
	void* elem;
	struct node* next;
} linked_node;

typedef struct linked_node_stack_struct {
	struct node* head;
	int lenght;
} linked_node_stack;

int push(linked_node_stack* s, void* elem);

void* pop(linked_node_stack* s);

linked_node_stack* init();

void destroy(linked_node_stack* s);