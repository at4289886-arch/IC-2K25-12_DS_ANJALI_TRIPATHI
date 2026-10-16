#include <iostream>
using namespace std;

int main()
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int c[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Addition of matrices:" << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//output of this code
Addition of matrices:
6 8
10 12

