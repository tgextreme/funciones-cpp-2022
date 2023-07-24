#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "write first number" << endl;
    cin >> a;
    cout << "write second number" << endl;
    cin >> b;
    cout << "write third number" << endl;
    cin >> c;

    if (a > b)
    {
        if (b > c)
        {
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << a << " " << c << " " << b << endl;
        }
    }
    else
    {
        if (a > c)
        {
            cout << b << " " << a << " " << c << endl;
        }
        else
        {
            cout << b << " " << c << " " << a << endl;
        }
    }

    return 0;
}