#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
    int num;      
    Node* next;     
}; Node

void add_node(Node** head, int value);

void remove_node(Node** head);

void free_list(Node** head);

#endif