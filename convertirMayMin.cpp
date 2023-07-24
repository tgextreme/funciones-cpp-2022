#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(){
    string str;

    cout<<"Digame un string"<<endl;
    cin>>str;
    for(int i=0;i<str.length();i++){
        
        if(islower(str.at(i))){
            
             printf("%c", str.at(i)-32);
          
            
        }else{
            
            printf("%c", str.at(i)+32);
          
        }
    }
    

}