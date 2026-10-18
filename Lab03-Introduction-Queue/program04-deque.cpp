//deque implimentaion
#include <iostream>
using namespace std;

int q[5];
int front = -1, rear = -1;

void insertFront(int x)
{
    if(front == 0)
        cout << "No space\n";
    else
    {
        if(front == -1)
            front = rear = 0;
        else
            front--;

        q[front] = x;
    }
}

void insertRear(int x)
{
    if(rear == 4)
        cout << "Queue is full\n";
    else
    {
        if(front == -1)
            front = 0;

        q[++rear] = x;
    }
}

void deleteFront()
{
    if(front == -1)
        cout << "Queue is empty\n";
    else
    {
        cout << "Deleted: " << q[front] << endl;

        if(front == rear)
            front = rear = -1;
        else
            front++;
    }
}

void display()
{
    if(front == -1)
        cout << "Queue is empty\n";
    else
    {
        for(int i = front; i <= rear; i++)
            cout << q[i] << " ";

        cout << endl;
    }
}

int main()
{
    insertRear(10);
    insertRear(20);
    insertFront(5);

    display();
    deleteFront();
    display();

    return 0;
}
//output of this code
5 10 20
Deleted: 5
10 20
