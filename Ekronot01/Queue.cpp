#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size) {
	q->head = (int*)malloc(size*sizeof(int));
	q->deq_index = 0;
	q->enq_index = 0;
	q->count = 0;
	q->size = size;
}

void cleanQueue(Queue * q) {
	for(int i = 0; i<q->size; i++){
		free(q->head);
	}
	q->deq_index = 0;
	q->enq_index = 0;
	q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue) {
	if (isEmpty(q)){
		printf("list is empty\n");
		return;
	} else if(isFull(q)){
		printf("list is full\n");
		return;
	}
		
	q->head[q->enq_index] = newValue;
	q->enq_index = (q->enq_index+1)%q->size;
	q->count -= 1;
}

int dequeue(Queue* q) {
	if (isEmpty(q)){
		return -1;
	} 
	int num = q->head[q->deq_index];
	q->head[q->deq_index] = 0;
	q->deq_index = (q->deq_index+1) % (q->size);
	q->deq_index += 1;
	return num;
}

bool isEmpty(Queue* s){
	if(s->count == 0){
		return true;
	} else{
		return false;
	}
}

bool isFull(Queue* s){
	if(s->count == s->size){
		return true;
	} else{
		return false;
	}
}

void print_Queue(Queue *q){
	for(int i = 0; i < q->size; i++){
		printf("%d ", *(q->head+i));
	}
}