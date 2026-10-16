#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int temp;

    temp = a[0];
    a[0] = a[1];
    a[1] = a[2];
    a[2] = a[3];
    a[3] = a[4];
    a[4] = temp;

    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
