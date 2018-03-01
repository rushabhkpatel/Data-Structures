#include <stdlib.h>
#include <iostream>
#include "list.h"
using namespace std;

void display(Node* h) {
    Node* t = h;
    while(t != NULL) {
        cout << " " << t->key;
        t = t->next;
    }
    cout << "\n";
}

void addEnd(int k, Node* h) {
    Node* temp = h;
    Node* t = (Node*)malloc(sizeof(Node));
    t->key = k;
    t->next = NULL;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = t;
}

void deleteNode(int k, Node* h) {
    Node* t = h;
    Node* pre = NULL;
    if(t->key == k) {
        h = h->next;
    }else {
        while(t->key != k && t->next != NULL){
            pre = t;
            t = t->next;
        }
        if(t->next == NULL && t->key != k){
            cout << "Element not present!\n";
        }else{
            pre->next = t->next;
        }
    }
}
