#include "Queue.h"
#include <stdio.h>

int main() {
	Queue* q = new Queue;
	initQueue(q, 5);
	enqueue(q, 1);
	enqueue(q, 2);
	enqueue(q, 3);
	print_Queue(q);
	isEmpty(q);
	isFull(q);
	enqueue(q, 4);
	isEmpty(q);
	isFull(q);
	enqueue(q, 5);
	isEmpty(q);
	isFull(q);
}