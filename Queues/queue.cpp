#include <stdlib.h>
#include <iostream>
#include "queue.h"
using namespace std;

extern Node* front;
extern Node* rear;

void Enqueue(int x){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->key = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL) {
        front = rear = temp;
    }else {
        rear->next = temp;
        rear = temp;
    }
}

void display() {
    Node* temp = front;
    if(temp == NULL) {
        return;
    }
    cout << temp->key << " ";
    while(temp->next != NULL) {
        temp = temp->next;
        cout << temp->key << " ";
    }
    cout << endl;
}

bool isEmpty() {
    if(front == NULL){
        return true;
    }
    return false;
}
void Dequeue() {
    /*
    3 cases while deleting -
        1. Queue is empty
        2. Queue has only one element.
        3. More than one element.
    */
    Node* temp = front;
    if(isEmpty()){
        cout << "Error! Queue is empty, nothing to dequeue. " << endl;
    }else {
        if(front == rear)
            front = rear = NULL;
        else{
            front = front->next;
        }
        free(temp);
    }
}
