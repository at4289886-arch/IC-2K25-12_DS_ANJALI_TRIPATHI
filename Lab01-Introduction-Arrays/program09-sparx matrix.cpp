#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {0, 0, 5},
        {0, 0, 0},
        {3, 0, 0}
    };

    int zero = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] == 0)
            {
                zero++;
            }
        }
    }

    cout << "Matrix:" << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    if(zero > 4)
    {
        cout << "It is a Sparse Matrix";
    }
    else
    {
        cout << "It is not a Sparse Matrix";
    }

    return 0;
}
//outout of this code
0  0  5
0  0  0
3  0  0
