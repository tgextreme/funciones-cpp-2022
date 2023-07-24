#include <iostream>

using namespace std;
/**
 * @brief 
 * Escriba un programa arithmetic_operators.cc que declare e 
 * inicialice variables de tipos aritméticos e imprima en pantalla 
 * el resultado de operar esas variables con todos los operadores 
 * que pueda utilizar con ellas. Utilice operadores aritméticos y 
 * de comparación. El programa imprimirá en pantalla líneas como 
 * la siguiente: 7 % 3 = 1
 * 
 * @return int 
 */
int main(){
    int num1=7;
    int num2=3;
    cout<<"suma: "<<(num1+num2)<<endl;
    cout<<"resta: "<<(num1-num2)<<endl;
    cout<<"multiplicacion: "<<(num1*num2)<<endl;
    cout<<"division: "<<((float)num1/num2)<<endl;
    cout<<"modulo: "<<(num1%num1)<<endl;
}