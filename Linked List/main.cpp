#include <iostream>
#include "list.h"
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->key = 10; //OR (*temp).key = 10;
    temp->next = NULL; //OR (*temp).next = NULL;
    Node* head = temp;
    display(head);
    addEnd(20, head);
    //display();
    addEnd(30, head);
    addEnd(40, head);
    //display();
    deleteNode(100, head);
    display(head);
    return 0;
}






