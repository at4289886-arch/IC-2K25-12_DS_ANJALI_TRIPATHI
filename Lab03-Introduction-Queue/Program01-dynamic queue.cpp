//dynamic queue implimentaion
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *n = new Node;
    n->data = x;
    n->next = NULL;

    if(front == NULL)
        front = rear = n;
    else
    {
        rear->next = n;
        rear = n;
    }
}

void dequeue()
{
    if(front == NULL)
        cout << "Queue is empty\n";
    else
    {
        cout << "Deleted: " << front->data << endl;
        Node *temp = front;
        front = front->next;
        delete temp;

        if(front == NULL)
            rear = NULL;
    }
}

void display()
{
    Node *temp = front;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    dequeue();
    display();

    return 0;
}
//output of this code
10 20 30
Deleted: 10
20 30
