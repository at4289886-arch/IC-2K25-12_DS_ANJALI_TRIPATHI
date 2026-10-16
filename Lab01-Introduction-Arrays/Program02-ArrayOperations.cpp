//search operation

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int x = 30;
    int i, found = 0;

    for(i = 0; i < 5; i++)
    {
        if(a[i] == x)
        {
            cout << "Element found";
            found = 1;
        }
    }

    if(found == 0)
    {
        cout << "Element not found";
    }

    return 0;
}
