//static queue implimentation
#include <iostream>
using namespace std;

int q[5];
int front = -1, rear = -1;

void enqueue(int x)
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

void dequeue()
{
    if(front == -1 || front > rear)
        cout << "Queue is empty\n";
    else
        cout << "Deleted: " << q[front++] << endl;
}

void display()
{
    for(int i = front; i <= rear; i++)
        cout << q[i] << " ";

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
