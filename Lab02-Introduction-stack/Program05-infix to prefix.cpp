#include <iostream>
using namespace std;

int main()
{
    char infix[] = "A+B";
    char prefix[10];

    prefix[0] = '+';
    prefix[1] = 'A';
    prefix[2] = 'B';
    prefix[3] = '\0';

    cout << "Infix: " << infix << endl;
    cout << "Prefix: " << prefix;

    return 0;
}
//output of this code
Infix: A+B
Prefix: +AB
