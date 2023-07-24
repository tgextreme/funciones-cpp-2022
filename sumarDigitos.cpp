#include <iostream>
#include <string>

using namespace std;
/**
 * @brief
 * Escriba un programa que lea un número natural e imprima como salida
 * la suma de los dígitos del número en cuestión.
 *
 * @return int
 */
int main()
{
    int num1, suma1;

    string num1Str;
    suma1 = 0;
    cout << "Digame el numero 1" << endl;
    cin >> num1;
    num1Str = to_string(num1);
    
    for (int i = 0; i < num1Str.length(); i++)
    {

        suma1 = suma1 + (((int)num1Str[i]) - 48);
    }
    cout << "La suma es igual a " << suma1 << endl;
}