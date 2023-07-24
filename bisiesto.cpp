#include <iostream>
#include <string>

using namespace std;
/**
Escriba un programa leap-year.cc que indique si un año es o no bisiesto Un año
bisiesto tiene 366 días. Después de la reforma gregoriana, los años bisiestos
son aquellos múltiplos de cuatro que no terminan con dos ceros, y también los
años que terminan con dos ceros tales que, después de eliminar estos dos ceros,
son divisibles por cuatro. Así, 1800 y 1900, a pesar de ser múltiplos de cuatro,
no fueron años bisiestos; por el contrario, 2000 fue un año bisiesto.*/
bool terminadosCeros(int numero)
{
    string str = to_string(numero);

    if (str.at(2) == '0' && str.at(3) == '0')
    {
        /// printf("termina cero");
        return true;
    }
    return false;
}
int separarDosPrimerosNumeros(int numero)
{
    return numero / 100;
}
int main()
{
    int anyo;
    cout << "Digame un anyo" << endl;
    cin >> anyo;
    bool check = terminadosCeros(anyo);
    if (check)
    {
        anyo = separarDosPrimerosNumeros(anyo);
    }
    if (anyo % 4 == 0)
    {
        cout << "Es bisiesto" << endl;
    }
    else
    {
        cout << "No es bisiesto" << endl;
    }
}