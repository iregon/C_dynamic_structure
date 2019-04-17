/**
 * @file stack.h
 * @author Alessandro Tornesello
 * @date 13 aprile 2019
 * @brief Stack management library.
 */

/**
 * @brief Struct with the information of the stack
 */
typedef struct stack_struct
{
	int size;    /**< Total size of the stack. */
	void** elem; /**< Array of elements in the stack. */
	int length;  /**< Counter of the elements in the stack. */
} Stack;

/**
 * @brief Make a new stack.
 * @param size Maximum elements in the stack.
 * @return Pointer to the new stack.
 */
Stack* make_stack(int size);

/**
 * @brief Push a new element in a stack.
 * @param s Stack in which to insert the element.
 * @param elem Element to insert.
 * @return Execution status:<br><b>0</b>: done without errors.<br><b>1</b>: error.
 */
int push_in_stack(Stack* s, void* elem);

/**
 * @brief Pop an element from the stack.
 * @param s Stack from which to take the element.
 * @return Pointer to the taked element.
 */
void* pop_from_stack(Stack* s);

/**
 * @brief Make a new stack.
 * @param s Maximum elements in the stack.
 * @return Maximum elements insertable in the stack.
 */
int get_stack_length(Stack* s);

/**
 * @brief Check if stack is empty.
 * @param s Stack to check.
 * @return <b>True</b> if stack is empty, otherwise <b>False</b>.
 */
_Bool is_stack_empty(Stack* s);

/**
 * @brief Change the maximum number insertable in the stack.
 * @param s Stack to modify.
 * @param size Maximum elements in the stack.
 * @return Pointer of the new stack.
 */
int change_stack_size(Stack* s, int size);