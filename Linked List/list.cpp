#include <stdlib.h>
#include <iostream>
#include "list.h"
using namespace std;

extern Node* head;

void display() {
    Node* t = head;
    while(t != NULL) {
        cout << t->key << " ";
        t = t->next;
    }
    cout << "\n";
}

void addEnd(int k) {
    Node* temp = head;
    Node* t = (Node*)malloc(sizeof(Node));
    t->key = k;
    t->next = NULL;
    if(head == NULL){
        head = t;
    }
    else{
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = t;
    }
}

void deleteNode(int k) {
    Node* t = head;
    Node* pre = NULL;
    if(t->key == k) {
        head = head->next;
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
