#include <iostream>

using namespace std;

int main()
{
    int numHarm;
    int actual = 1;
    double resultado = 0;
    cout << "Digame el numero que quieras harmonizar" << endl;
    cin >> numHarm;
    while (actual <= numHarm)
    {
        resultado = resultado + ((double)1 / ((double)actual));
        actual++;
    }
    cout<<resultado << endl;
}