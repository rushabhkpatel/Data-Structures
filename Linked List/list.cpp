#include <stdlib.h>
#include <iostream>
#include "list.h"
using namespace std;

extern Node* head;
extern int length;
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
    length++;
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
    length--;
}


void insertAtPos(int k, int pos) {
    Node* t = (Node*)malloc(sizeof(Node));
    t->key = k;
    t->next = NULL;
    if(head == NULL){
        head = t;
    }else{
        if(pos == 0){
            t->next = head;
            head = t;
        }else if(pos >= length){
            Node *pres = head;
            Node *prev = NULL;
            for(int i = 0; i < length; i++){
                prev = pres;
                pres = pres->next;
            }
            prev->next = t;
            t->next = pres;
        }else{
            Node *pres = head;
            Node *prev = NULL;
            for(int i = 0; i < pos; i++){
                prev = pres;
                pres = pres->next;
            }
            prev->next = t;
            t->next = pres;
        }
    }
    length++;
}

