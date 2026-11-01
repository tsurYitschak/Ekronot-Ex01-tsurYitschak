#include <stdio.h>
#include "stack.h"

void initStack(Stack* s) {
	if (s != nullptr) {
		s->head = nullptr;
	}
	s->count = 0;
}

void cleanStack(Stack* s) {
	free_list(&(s->head));
}

void push(Stack* s, unsigned int element) {
	if (s == nullptr) {
		return;
	}
	add_node(&(s->topNode), element);
	s->count += 1;
}

int pop(Stack* s) {
	if (s == nullptr) {
		return -1;
	}

	num = s->head->num;
	remove_node(&(s->head));
	return num;
}

bool isEmpty(Stack* s) {
	if (s->count == 0) {
		return true;
	}
	else {
		return false;
	}
}
bool isFull(Stack* s) {
	return false;
 }
