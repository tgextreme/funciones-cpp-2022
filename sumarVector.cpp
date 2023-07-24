#include <iostream>
#include <vector>
#include <cmath>
/**
 * Desarrolle un programa que incluya una función cuyo nombre sea ReduceSum que tome como parámetro un vector de números en punto flotante y devuelva como resultado la suma de todos los valores almacenados en el vector.
Utilice la función GenerateVector() 
 * 
 */
using namespace std;

float sumaVector(vector<float> vectorFloat, int numero)
{
    float num = 0.0;
    for (int i = 0; i < numero; i++)
    {
        num = num + vectorFloat[i];
    }
    return num;
}

int main()
{
    vector<float> vectorFloat{1.0, 5.10, 7.10, 20.3};
    cout << "El resultado es " << sumaVector(vectorFloat, 4) << endl;
}