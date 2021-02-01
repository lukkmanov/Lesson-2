#include <iostream>
using namespace std;

struct xo {
    char x = 'X';
    char o = 'O';
};

int main()
{
    struct xo xo;
    xo.x;
    xo.o;
    char m[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m[i][j] = 0;
            cout << xo.x << m[i][j];
           // cout << xo.o << m[i][j];
        }

        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m[i][j] = 0;
           // cout << xo.x << m[i][j];
            cout << xo.o << m[i][j];
        }

        cout << endl;
    }
    return 0;
}
