//INSERTION IN 2D ARRAY

#include <iostream>
using namespace std;

int main()
{
    int a[2][2] = {{10, 20}, {30, 0}};

    a[1][1] = 40;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}  
//OUTPUT OF THIS CODE
10 20
30 40
