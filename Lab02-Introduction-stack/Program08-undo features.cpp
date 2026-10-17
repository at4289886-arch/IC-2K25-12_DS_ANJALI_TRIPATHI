#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;

    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << stack[top] << endl;

    top--;

    cout << stack[top] << endl;

    return 0;
}
//output of this code
30
20
