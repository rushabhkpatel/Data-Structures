#include <iostream>
#include "queue.h"
using namespace std;

Node* front = NULL;
Node* rear = NULL;

int main()
{
    cout << "Hello world!" << endl;
    char again = 'y';
    int option;
    while(again == 'y'){

        cout << "Choose an option (Number corresponding to the option): " << endl;
        cout << "1. Enqueue - Add a node in the end. " << endl;
        cout << "2. Dequeue - Delete a node from the front. " << endl;
        cout << "3. Is the queue empty? "<< endl;
        cout << "4. Display the queue. ";
        cin >> option;
        switch(option) {
            case 1 :
                cout << "Enter the number to be added. " << endl;
                int t;
                cin >> t;
                Enqueue(t);
                display();
                break;
            case 2 :
                Dequeue();
                display();
                break;
            case 3 :
                if(isEmpty()) {
                    cout << "Queue is empty! " << endl;
                }else {
                    cout << "Queue is not empty " << endl;
                }
                break;
            case 4:
                cout << "Elements of the queue are. " << endl;
                display();
                break;
            default :
                display();
                break;
        }
        cout << "\nDo you want to continue ? (y/n) : " ;
        cin >> again;

    }
    return 0;
}
