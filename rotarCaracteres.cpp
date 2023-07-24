#include <iostream>
#include <string>

using namespace std;

char changeCaracter(char car)
{
    switch (car)
    {
    case 'a':
        return 'e';
        break;
    case 'e':
        return 'i';
        break;
    case 'i':
        return 'o';
        break;
    case 'o':
        return 'u';
        break;
    case 'u':
        return 'a';
        break;
    default:
        return car;
        break;
    }
}

/*
Escriba un programa rotate.cc que rote las vocales en minúscula que encuentre en el fichero que se le pase como parámetro por línea de comandos, entendiendo por rotar el cambio de

'a' por 'e'
'e' por 'i'
'i' por 'o'
'o' por 'u'
'u' por 'a'
De modo que un fichero de entrada que contuviera este texto:

In an age when acronyms were popular, the Manchester Mark I was
sometimes referred to as MADM (Manchester Automatic Digital Machine)
or MUC (Manchester University Computer).
Produciría como salida este otro:

In en egi whin ecrunyms wiri pupaler, thi Menchistir Merk I wes
sumitomis rifirrid tu es MADM (Menchistir Aatumetoc Dogotel Mechoni)
ur MUC (Menchistir Unovirsoty Cumpatir).

*/

int main()
{
    string str = "Hola";
    char cad[1000];
    FILE *pf = fopen("texto.txt", "r");
    while (fgets(cad, 1000, pf))
    {
        //"\0"
        for(int i=0;i<1000;i++){
            if(cad[i]=='\0'){
                
                break;
            }else{
                cout<<changeCaracter(cad[i]);
               
            }
        }
        cout<<endl;
       
    }

    
}