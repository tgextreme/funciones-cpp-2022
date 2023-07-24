#include <iostream>
#include <string.h>

using namespace std;
string encriptarXor(string frase, string clave)
{
    string res;
    int a, b, c;
    int i, j;
    int longi;
    res = frase; // Recorro la cadena para obtener la frase encriptada
    for (i = 0; i < frase.length(); i++)
    {
        a = int(frase[i]);
        // Calculo el indice de la clave
        j = i % clave.length();
        b = int(clave[j]);
        // Operación xor
        c = a ^ b;
        // Guardo el caracter encriptado
        res[i] = char(c);
    }
    return res;
}

char cifradoCesarCaracter(char c)
{
    string cadena="abcdefghijklmnopqrtuvwxyz";
    string cadenaEncriptada="ghijklmnopqrtuvwxyzabcdef";
    for(int i = 0; i <cadena.length();i++){
        if(c==cadena[i]){
            return cadenaEncriptada[i];
        }
    }
    return c;
}
string cifradoCesarFrase(string frase){
    
}
int main()
{ /*
     string frase = encriptarXor("esta es la frase ", "hola");
     cout << frase << endl;
     cout << encriptarXor(frase, "hola") << endl;
     */
    
}