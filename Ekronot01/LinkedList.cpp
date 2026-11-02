#include  <stdio.h>
#include "LinkedList.h"

void add_node(Node** head, int value) {
	Node new_node = new Node();
	new_node.num = value;
	new_node.next = *head;
	head = new_node;
}

void remove_node(Node** head) {
	if (head == nullptr || *head == nullptr) {
		return -1;
	}

	Node *temp = *head;
	*head = (*head)->next;
	delete temp;
}

void free_list(Node** head) {
	if (head == nullptr) {
		return;
	}
	Node* current = *head;
	while (current != nullptr) {
		Node* nextNode = current->next;
		delete current;
		current = nextNode;
	}
	*head = nullptr;
}