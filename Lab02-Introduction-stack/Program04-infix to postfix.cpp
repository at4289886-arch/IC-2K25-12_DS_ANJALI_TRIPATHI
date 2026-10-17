//infix to postfix convirsion
#include <iostream>
using namespace std;

int main()
{
    char infix[] = "A+B";
    char postfix[10];
    postfix[0] = 'A';
    postfix[1] = 'B';
    postfix[2] = '+';
    postfix[3] = '\0';

    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix;

    return 0;
}
//output of this code
Infix: A+B
Postfix: AB+
