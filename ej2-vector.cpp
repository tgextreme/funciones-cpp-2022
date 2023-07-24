#include <iostream>
#include <vector>

using namespace std;

double ReduceSum (vector<double> numeros){
    double total=0;
    for(int i=0; i<numeros.size(); i++){
        total=total+numeros[i];

    }
    return total;


}
/************
 * Desarrolle un programa que incluya una función 
 * cuyo nombre sea ReduceSum que tome como 
 * parámetro un vector de números en punto flotante
 *  y devuelva como resultado la suma de todos los 
 * valores almacenados en el vector.
Utilice la función GenerateVector() para
 generar vectores y probar el funcionamiento de ReduceSum.
 * Public test cases
Input           Output
1.0 1.0 1.0      3.0
1 2 3 4 5 6     21.0
0 0 0 0 1 0 1    2.0*/
int main(){

    vector<double> v1{1.0, 1.0, 1.0    };
    vector<double> v2{1, 2, 3, 4, 5, 6    };
    vector<double> v3{0, 0, 0, 0, 1, 0, 1    };
    double total=ReduceSum(v1);
    cout<<total<<endl;
    total=ReduceSum(v2);
    cout<<total<<endl;
    total=ReduceSum(v3);
    cout<<total<<endl;


}