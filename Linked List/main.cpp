#include <iostream>
#include "list.h"
#include <stdlib.h>
using namespace std;
/*
Written by Rushabh Patel
*/
Node* head = NULL;
int length = 0;
int main() {

    cout << "Welcome\n" << endl;
    char again = 'y';
    int option;
    while(again == 'y'){

        cout << "Choose an option (Number corresponding to the option): " << endl;
        cout << "1. Add a node in the end." << endl;
        cout << "2. Insert a Node at a particular position." << endl;
        cout << "3. Delete a particular node." << endl;
        cout << "4. Display the list. "<< endl;
        cout << "5. Display Length. "<< endl;
        cin >> option;
        switch(option){

            case 1:
                cout << "Enter the value in the node" <<"\n";
                int tmp;
                cin >> tmp;
                addEnd(tmp);
                display();
                break;
            case 2:
                cout << "Enter the value in the node and the position" <<"\n";
                int tmp3, pos;
                cin >> tmp3 >> pos;
                insertAtPos(tmp3,pos);
                display();
                break;
            case 3:
                if(head == NULL)
                    cout << "List is empty, nothing to delete \n";
                else{
                    cout << "Enter the node to be deleted." << "\n";
                    int tmp1;
                    cin >> tmp1;
                    deleteNode(tmp1);
                    display();
                }
                break;
            case 4:
                if(head == NULL) {
                    cout << "List is empty, nothing to display." << "\n";
                }else{
                    display();
                }
                break;
            case 5:
                cout << "The length of the list is " << length << endl;
            default:
                display();
        }
        cout << "\n" << "Do you want to continue ? (y/n) : " ;
        cin >> again;
    }
    return 0;
}






