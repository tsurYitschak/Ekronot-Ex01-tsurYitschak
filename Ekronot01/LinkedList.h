#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
    int data;      
    Node* next;     
};

void add_node(Node** headRef, int value);

void remove_node(Node** headRef);

void freeList(Node** headRef);

#endif