#include <iostream>
using namespace std;

int main()
{
    char stack[10];
    int top = -1;
    char exp[] = "A+B";

    for(int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '+' || exp[i] == '-' ||
           exp[i] == '*' || exp[i] == '/')
        {
            stack[++top] = exp[i];
        }
    }

    cout << "Infix Expression: " << exp;

    return 0;
} 
//output of this code
Infix Expression: A+B
