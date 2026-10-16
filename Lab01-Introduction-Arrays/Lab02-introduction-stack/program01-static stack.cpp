// stack implimentaion

#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;

    // Push operation
    if(top < 4)
    {
        top++;
        stack[top] = 10;
    }

    if(top < 4)
    {
        top++;
        stack[top] = 20;
    }

    if(top < 4)
    {
        top++;
        stack[top] = 30;
    }

    cout << "Stack after Push: ";

    // Display operation
    if(top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        for(int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
    }

    // Peek operation
    if(top == -1)
    {
        cout << "\nStack is empty";
    }
    else
    {
        cout << "\nTop element: " << stack[top];
    }

    // Pop operation
    if(top == -1)
    {
        cout << "\nStack Underflow";
    }
    else
    {
        cout << "\nDeleted element: " << stack[top];
        top--;
    }

    // Display after Pop
    cout << "\nStack after Pop: ";

    if(top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        for(int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
    }

    return 0;
}

// output of this code
Stack after Push: 30 20 10
Top element: 30
Deleted element: 30
Stack after Pop: 20 10
