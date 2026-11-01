#include  <stdio.h>
#include "LinkedList.h"

void add_node(Node** head, int value) {
	Node new_node = new Node();
	new_node.num = value;
	new_node.next = *head;
	head = new_node;
}

void remove_node(Node** head) {
	if (head == NULL || *_CRT_BEGIN_C_HEADER == NULL) {
		return;
	}
	Node *temp = *head;
	*head = (*head)->next;
	delete temp;
}

void freeList(Node** head) {
	if (head == NULL) {
		return;
	}
	Node* current = *head;
	while (current != NULL) {
		Node* nextNode = current->next;
		delete current;
		current = nextNode;
	}
	*head = NULL;
}