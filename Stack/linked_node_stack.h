/**
 * @file linked_node_stack.h
 * @author Alessandro Tornesello
 * @date 13 aprile 2019
 * @brief Linked node stack management library.
 */

 /**
  * @brief Struct with the information of the single node
  */
typedef struct linked_node_struct {
	void* elem;			/**< Pointer to element. */
	struct node* next;	/**< Pointer to next node. */
} linked_node;

/**
 * @brief Struct with the information of the stack
 */
typedef struct linked_node_stack_struct {
	struct node* head;	/**< Pointer to first element. */
	int lenght;			/**< Total size of the stack. */
} linked_node_stack;

/**
 * @brief Push a new element in a stack.
 * @param s Pointer to stack in which to insert the element.
 * @param elem Pointer to element to insert.
 * @return Execution status:<br><b>0</b>: done without errors.<br><b>1</b>: error.
 */
int push(linked_node_stack* s, void* elem);

/**
 * @brief Pop an element from the stack.
 * @param s Pointer to stack from which to take the element.
 * @return Pointer to the taked element.
 */
void* pop(linked_node_stack* s);

/**
 * @brief Initialize a new stack.
 * @return Pointer to the new stack.
 */
linked_node_stack* init();

/**
 * @brief Destroy a stack.
 * @param s Pointer to stack to destroy.
 */
void destroy(linked_node_stack* s);