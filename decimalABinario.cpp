#include <iostream>

using namespace std;

/**
 * Escriba un programa decimal-to-binary.cc que convierta números de 
 * decimal a binario. No utilice los tipos std::string, std::vector o std::array.
 *
 *
 */

int main()
{
    int numero=50;
    int mod=0;
    char residuo[50];
    char resudioReves [50];
    int tam=0;
    
    while (numero>=1){
        mod=numero%2;
        printf("%d",mod);
        if(mod==0){
            residuo[tam]='0';
            
        }else{
            residuo[tam]='1';

        }
        tam++;
        numero=numero/2;
        
    }

    
}
