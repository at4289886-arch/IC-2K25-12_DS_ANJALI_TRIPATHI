//search operation in 2d array

#include <iostream>
using namespace std;

int main()
{
    int a[2][2] = {{10, 20}, {30, 40}};
    int x = 30;
    int found = 0;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(a[i][j] == x)
            {
                cout << "Element found";
                found = 1;
            }
        }
    }

    if(found == 0)
    {
        cout << "Element not found";
    }

    return 0;
}
