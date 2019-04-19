/**
 * @file queue.h
 * @author Alessandro Tornesello
 * @date 13 aprile 2019
 * @brief Queue management library.
 */

/**
 * @brief Struct with the information of the queue
 */
typedef struct queue {
	node_struct* head;	/**< Pointer to element on head. */
	node_struct* tail;	/**< Pointer to element on tail. */
	int length;			/**< Length of the queue. */
} queue_struct;

/**
 * @brief Struct with the information of the single node
 */
typedef struct node {
	void* elem;			/**< Pointer to element. */
	node_struct* next;	/**< Pointer to next element. */
} node_struct;

int enqueue(queue_struct* q, void* newelem);

void* dequeue(queue_struct* q);