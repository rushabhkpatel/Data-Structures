#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

struct Node {
    int key;
    Node* next = NULL;
};

void display();
void addEnd(int k);
void deleteNode(int k);
void insertAtPos(int k, int pos);


#endif // LIST_H_INCLUDED
