#include <iostream>
#include <vector>

using namespace std;

void mostrarCaracteristicas(vector<double> v)
{
    double media;
    double total = 0;
    double minimo = v[0];
    double maximo = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (minimo > v[i])
        { // minimo
            minimo = v[i];
        }
        if(maximo < v[i]){
            maximo=v[i];
        }
        total=total+v[i];
    }
    cout<<"El minimo es "<<minimo<<" el maximo es "<<maximo<<" el total es "<<total<< " la media es "<<total/((double)v.size())<<endl;
}

int main(){

 vector<double> v1{1.0, 1.0, 1.0    };
    vector<double> v2{1, 2, 3, 4, 5, 6    };
    vector<double> v3{0, 0, 0, 0, 1, 0, 1    };
    mostrarCaracteristicas(v1);
    mostrarCaracteristicas(v2);
    mostrarCaracteristicas(v3);


}
