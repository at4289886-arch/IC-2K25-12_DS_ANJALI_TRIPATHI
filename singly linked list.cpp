// insert and display in singly list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    Node* newNode;
    Node* temp;

    for(int i = 1; i <= 3; i++) {
        newNode = new Node();
        cout << "Enter value: ";
        cin >> newNode->data;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
        }
        else {
            temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    temp = head;
    cout << "Linked List: ";

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}
