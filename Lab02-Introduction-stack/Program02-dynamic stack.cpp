//dynamic stack implimentaion using linked list

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *top = NULL;

void push(int x)
{
    Node *n = new Node;
    n->data = x;
    n->next = top;
    top = n;
}

void pop()
{
    if(top == NULL)
        cout << "Stack is empty";
    else
    {
        cout << "Deleted: " << top->data << endl;
        top = top->next;
    }
}

void display()
{
    Node *temp = top;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();
    pop();
    display();


    return 0;
}
//output of this code
30 20 10
Deleted: 30
20 10
