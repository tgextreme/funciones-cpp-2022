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
        if (a > c)
        {
            cout << a << endl;
        }else{
            cout << c << endl;
        }
       
    }else
    if (b > a)
    {
        if (b > c)
        {
            cout << b << endl;
        }else{
            cout << c << endl;
        }
       
    }
    if (c > a)
    {
        if (b > c)
        {
            cout << b << endl;
        }else{
            cout << c << endl;
        }
       
    }

    return 0;
}