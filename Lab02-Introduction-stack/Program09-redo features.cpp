#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;

    stack[++top] = 10;
    stack[++top] = 20;

    cout << "Before Redo: " << stack[top] << endl;

    stack[++top] = 30;

    cout << "After Redo: " << stack[top] << endl;

    return 0;
}
//output of this code
Before Redo: 20
After Redo: 30
