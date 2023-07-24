/*std::vector<double> GenerateVector(const int size,
const double lower, const double upper);
que genere (devuelva) un vector con size componentes.
Esas componentes (elementos del vector se
inicializarán con valores generados aleatoriamente
en el intervalo (lower, upper). Los límiter inferior
y superior de ese intervalo se pasan como parámetros
a la función GenerateVector(). Una vez tenga
desarrollada esa función, podría invocarla*/

#include <iostream>
#include <vector>
#include <random>
#include <cstdlib>
#include <time.h>

using namespace std;

int generarAleatorio(int min, int max)
{
    double r = (rand() % (max - min)) + ((double)min);
    r = (rand() % (max - min)) + ((double)min);
    return (int)r;
}
vector<double> GenerateVector(const int size,const double lower, const double upper)
{
    vector<double> v(size);
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
    {
        v[i] = generarAleatorio(lower, upper);
    }

    return v;
}

int main()
{
    int size;
    double lower, upper;
    cout<<"Dime el tamanyo del vector"<<endl;
    cin>>size;
    cout <<"Numero minimo"<<endl;
    cin>>lower;
    cout<<"Numero maximo"<<endl;
    cin>>upper;

    vector<double> v=GenerateVector(size,lower,upper+1);
    for (int i = 0; i <size;i++){
        cout<<v.at(i)<<endl;
    }
}
