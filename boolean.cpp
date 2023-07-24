#include <iostream>

using namespace std;
/**
 * @brief
 * Escriba un programa boolean_operators.cc que imprima en pantalla la tabla de verdad de los 
 * operadores lógicos (and, or, not) de C++. El programa deberá utilizar un par de variables 
 * booleanas y mostrar el resultado de operar ambas variables con todos sus posibles valores y 
 * con cada uno de los operadores lógicos.
 *
 */
int main()
{
    bool a,b;
    a=true;
    b=true;
    if(a && b){
        cout<<"El AND de a y b es verdadero"<<endl;
    }else{
        cout<<"El AND de a y b es falso"<<endl;
    }
    if(a || b){
        cout<<"El OR de a y b es verdadero"<<endl;
    }else{
        cout<<"El OR de a y b es falso"<<endl;
    }
    if(a ^ b){
        cout<<"El XOR de a y b es verdadero"<<endl;
    }else{
        cout<<"El XOR de a y b es falso"<<endl;
    }
    if(a){
        cout<<"a es verdadero"<<endl;
    }else{
        cout<<"a es falso"<<endl;
    }
    if(b){
        cout<<"b es verdadero"<<endl;
    }else{
        cout<<"b es falso"<<endl;
    }


    if(!a){
        cout<<"negacion a es verdadero"<<endl;
    }else{
        cout<<"negacion a es falso"<<endl;
    }
    if(!b){
        cout<<"negacion b es verdadero"<<endl;
    }else{
        cout<<"negacion b es falso"<<endl;
    }
}