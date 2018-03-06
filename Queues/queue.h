#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

struct Node {
    int key;
    Node* next = NULL;
};

void Enqueue(int x);
void display();
void Dequeue();
bool isEmpty();
#endif // QUEUE_H_INCLUDED
