#include <iostream>

using namespace std;

int main()
{

    int n = 10;

    int a = 0;
    int b = 1;
    int c = 1;
    cout << "Dime el numero n que quiera imprimir de fibonacci" << endl;
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " " << endl;
    }
}