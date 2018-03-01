#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

struct Node {
    int key;
    Node* next;
};


void display(Node* h);
void addEnd(int k, Node* h);
void deleteNode(int k, Node* h);


#endif // LIST_H_INCLUDED
