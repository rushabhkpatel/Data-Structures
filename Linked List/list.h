#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

struct Node {
    int key;
    Node* next = NULL;
};

void display();
void addEnd(int k);
void deleteNode(int k);


#endif // LIST_H_INCLUDED
