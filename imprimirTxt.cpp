#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int checkPalabra(char palabra, char caracter)
{
    return 0;
}
void imprimirArchivo(string palabra)
{
    std::ofstream outfile;
    string archivo = palabra.substr(0, 1) + ".txt";
    cout << archivo << endl;
    outfile.open(archivo, std::ios_base::app); // append instead of overwrite
    outfile << palabra;
}

int main()
{
    string str = "Hola";
    string intermedio = "";
    char cad[1000];
    FILE *pf = fopen("texto.txt", "r");
    while (fgets(cad, 1000, pf))
    {

        for (int i = 0; i < 1000; i++)
        {
            if (cad[i] == '\0')
            {

                break;
            }
            else
            {
            }
        }
        str = cad;
        stringstream input_stringstream(str); // Convertir la cadena a un stream
        while (getline(input_stringstream, intermedio, ' '))
        {
            imprimirArchivo(intermedio);
            cout << intermedio << endl;
        }
        // cout << str << endl;
    }
}