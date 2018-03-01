#include <iostream>
#include "list.h"
#include <stdlib.h>
using namespace std;
Node* head = NULL;
int main()
{
    cout << "Hello world!" << endl;
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->key = 10; //OR (*temp).key = 10;
    temp->next = NULL; //OR (*temp).next = NULL;
    head = temp;
    display();
    addEnd(20);
    //display();
    addEnd(30);
    addEnd(40);
    //display();
    deleteNode(100);
    display();
    return 0;
}






