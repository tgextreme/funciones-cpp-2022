#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
/** 
 * Escriba un programa change-case.cc que tome como entrada una cadena 
 * de caracteres sin espacios e imprima como salida la misma cadena 
 * convirtiendo los caracteres que sean letras mayúsculas por minúsculas 
 * y viceversa. Los caracteres que no sean letras mayúsculas ni minúsculas 
 * deberán permanecer inalterados. Desarrolle su programa de forma que 
 * incluya como mínimo dos funciones y realice un diseño tal que el 
 * programa se organice en más de un fichero de código fuente (*.cc).
 */
int main()
{
    string str = "";
    cout<<"digame una palabra"<<endl;
    cin>>str;

    for (int i = 0; i < str.length(); i++)
    {
        if (islower(str.at(i)))
        {
            str.at(i)=toupper(str.at(i));
        }else{
            str.at(i)=tolower(str.at(i));
        }
    }
    cout << str << endl;
}