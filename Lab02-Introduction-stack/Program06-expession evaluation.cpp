#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;

    stack[++top] = 10;
    stack[++top] = 20;

    int a = stack[top--];
    int b = stack[top--];

    stack[++top] = a + b;

    cout << "Result: " << stack[top];

    return 0;
}
//output of this code
Result: 30
