#include <stdlib.h>
#include "queue.h"

int enqueue(queue_struct* q, void* newelem) {
	node_struct* newnode;
	newnode = (node_struct*)malloc(sizeof(node_struct));
	
	if (!newnode) return 1;
	if (q->tail) q->tail->next = newnode;

	q->tail = newnode;
	q->length++;

	if (!q->head)q->head = newnode;

	newnode->next = NULL;
	newnode->elem = newelem;

	return 0;
}

void* dequeue(queue_struct* q) {
	node_struct* todel;
	void* ret;

	if (!q->head) return NULL;

	todel = q->head;
	ret = todel->elem;
	q->head = todel->next;

	if (!q->head) q->tail = NULL;

	q->length--;

	free(todel);

	return ret;
}
