//roation in 2d arrray

#include <iostream>
using namespace std;

int main()
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            b[j][1-i] = a[i][j];
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//output of this code
3 1
4 2  
