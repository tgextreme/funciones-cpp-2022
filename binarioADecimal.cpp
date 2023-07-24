
#include <iostream>
#include <math.h>


using namespace std;
/**
 * Escriba un programa binary-to-decimal.cc que
  convierta números binarios en decimal. No utilice los tipos std::string, std::vector o std::array.
  Si la entrada no fuera un número binario, el programa debe imprimir en pantalla un mensaje de error y
  finalizar la ejecución.
*/
int main()
{
    char numero[50];

    cout << "Digame numero que quiera convertir a decimal" << endl;
    cin >> numero;

 
    bool continuar = true;
    int desde;
    for (int i = 0; i < 50; i++)
    {
        if (numero[i] == '\0')
        {
            desde = i;
            break;
        }
        if (numero[i] != '1' && numero[i] != '0')
        {
            continuar = false;
        }
    }
    // convertimos a binario
    int suma = 0;
    int num = 0;
    if (continuar)
    {
        for (int i = desde - 1; i >= 0; i--)
        {
            if (numero[i] == '1')
            {
                suma = suma + ((int)pow(2, num));
            }
            num++;
            //  suma=suma+((pow()))
        }
    }

    if (continuar == true)
    {
        cout << "verdadero " << suma;
    }
    else
    {
        cout << "falso" << endl;
    }
}