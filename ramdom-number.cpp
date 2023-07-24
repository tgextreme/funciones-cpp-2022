#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>

using namespace std;
/**
 * Desarrolle un programa random_numbers.cc que tome como entrada dos
 * números naturales n y m tales que n < m y genere un número aleatorio
 * real r en el intervalo [n, m].
Desarrolle su programa de modo que incluya al menos dos funciones, y
 que sea una de ellas la que tome como parámetros los dos números
 introducidos por el usuario y devuelva como resultado el número aleatorio.

Para generar números aleatorios en C++ consulte la función std::rand por ejemplo en esta referencia.
 *
 */

int numeroMaximo(int num1, int num2)
{
    int max;
    if (num1 > num2)
    {
        max = num1 + 1;
    }
    else
    {
        max = num2 + 1;
    }
    return max;
}

int numeroMinimo(int num1, int num2)
{
    int min;
    if (num1 > num2)
    {
        min = num2;
    }
    else
    {
        min = num1;
    }
    return min;
}

int generarAleatorio(int min, int max)
{
    double r = (rand() % (max - min)) + ((double)min);
    r = (rand() % (max - min)) + ((double)min);
    return (int)r;
}
int main()
{
    int num1, num2, min, max;
    cout << "digame el primer numero" << endl;
    num1 = 2;
    cout << "Digame el segundo numero" << endl;
    num2 = 7;
    min = numeroMinimo(num1, num2);
    max = numeroMaximo(num1, num2);

    srand((unsigned)time(NULL));
    for (int i = 0; i < 50; i++)
    {
        cout << generarAleatorio(min, max) << endl;
    }
}
