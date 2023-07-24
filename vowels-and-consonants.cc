#include <iostream>
#include <string>
/*
Escriba un programa vowels-and-consonants.cc 
que imprima en pantalla la palabra con mayor 
número de vocales y la palabra con el mayor 
número de consonantes (independientemente de 
si se trata de mayúsculas o minúsculas) que 
se encuentren en un fichero de texto que se 
le pase como parámetro por línea de comandos.
 En caso de empate (haya varias palabras con
  igual número de vocales/consonantes) el 
  programa imprimirá la palabra que aparezca 
  antes en el fichero de texto.
*/
using namespace std;

int contarVocales(string palabra){
    int contador=0;
    for(int i=0; i<palabra.length();i++){
        if(palabra.at(i)=='a'||palabra.at(i)=='e'||palabra.at(i)=='i'||palabra.at(i)=='o'||palabra.at(i)=='u'||palabra.at(i)=='A'||palabra.at(i)=='E'||palabra.at(i)=='I'||palabra.at(i)=='O'||palabra.at(i)=='U'){
            contador++;
        }

        
    }
    return contador;
}

int contarConsonantes(string palabra){
int contador=0;
for(int i=0; i<palabra.length();i++){
        if(palabra.at(i)=='b'||palabra.at(i)=='c'||palabra.at(i)=='d'||palabra.at(i)=='f'||palabra.at(i)=='g'||palabra.at(i)=='h'||palabra.at(i)=='j'||palabra.at(i)=='k'||palabra.at(i)=='l'||palabra.at(i)=='m'||palabra.at(i)=='n'||palabra.at(i)=='p'||palabra.at(i)=='q'||palabra.at(i)=='r'||palabra.at(i)=='s'||palabra.at(i)=='t'||palabra.at(i)=='v'||palabra.at(i)=='w'||palabra.at(i)=='x'||palabra.at(i)=='y'||palabra.at(i)=='z'||palabra.at(i)=='B'||palabra.at(i)=='C'||palabra.at(i)=='D'||palabra.at(i)=='F'||palabra.at(i)=='G'||palabra.at(i)=='H'||palabra.at(i)=='J'||palabra.at(i)=='K'||palabra.at(i)=='L'||palabra.at(i)=='M'||palabra.at(i)=='N'||palabra.at(i)=='P'||palabra.at(i)=='Q'||palabra.at(i)=='R'||palabra.at(i)=='S'||palabra.at(i)=='T'||palabra.at(i)=='V'||palabra.at(i)=='W'||palabra.at(i)=='X'||palabra.at(i)=='Y'||palabra.at(i)=='Z'){
            contador++;
        }

        
    }
    return contador;
}
int main()
{
    string palabraVocal;
    string palabraConso;
    int maxV , maxC, maxpal, numV,numC;
    maxV=0;
    maxC=0;
    
    string palabraActual;
    cout<<"cuantas palabras quieres escribir"<<endl;
    cin>>maxpal;
    for(int i=0;i<maxpal;i++){
        cout<<"Digame la palabra"<<endl;
        cin>>palabraActual;
        numV=contarVocales(palabraActual);
        numC=contarConsonantes(palabraActual);
        if(numV>maxV){
            maxV=numV;
            palabraVocal=palabraActual;
        }
        if(numC>maxC){
            maxC=numC;
            palabraConso=palabraActual;
        }

    }
    cout <<"La palabra con mayor numero de cocales es "<<palabraVocal
    <<" la palabra con mayor numero de consonantes es "<<palabraConso<<endl;
    


 /*   string palabra="hola";
    int contadorV=contarVocales(palabra);
    cout<<contadorV<<endl;
 int contadorC=contarConsonantes(palabra);*/
 //   cout<<contadorC<<endl;
}