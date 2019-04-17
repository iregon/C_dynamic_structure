/**
 * @file linked_node_stack.c
 * @author Alessandro Tornesello
 * @date 13 aprile 2019
 * @brief Linked node stack management library.
 */

#include <stdlib.h>
#include "linked_node_stack.h"

int push(linked_node_stack* s, void* elem) {
	linked_node* newnode;
	newnode = (linked_node*)malloc(sizeof(linked_node));

	if (!newnode) return 1;

	newnode->next = s->head;
	newnode->elem = elem;

	s->head = newnode;
	s->lenght++;

	return 0;
}

void* pop(linked_node_stack* s) {
	linked_node* todel;
	void* toret;

	todel = s->head;

	if (!todel) return NULL;

	toret = todel->elem;
	s->head = todel->next;
	s->lenght--;

	free(todel);

	return toret;
}

linked_node_stack* init() {
	linked_node_stack* s;
	s = (linked_node_stack*)malloc(sizeof(linked_node_stack));

	if (!s)return NULL;

	s->head = NULL;
	s->lenght = 0;

	return s;
}

void destroy(linked_node_stack* s) {
	linked_node* cur;
	cur = s->head;

	while (cur != NULL) {
		linked_node* tmp;
		tmp = cur->next;
		free(cur);
		cur = tmp;
	}

	free(s);
}
