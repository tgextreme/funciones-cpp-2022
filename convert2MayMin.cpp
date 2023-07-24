#include <iostream>
#include <string>

using namespace std;



int main(){
    string str;

    cout<<"Digame un string"<<endl;
    cin>>str;
    //for(int i=0;i<str.length();i++){
        
        if(islower(str.at(0))){
           // str.at(i)=='i';
             printf("%c", str.at(0)-32);
          
            
        }else{
            
            printf("%c", str.at(0)+32);
          
        }
        if(str.at(0)=='a'||str.at(0)=='e'||str.at(0)=='i'||str.at(0)=='o'||str.at(0)=='u'||str.at(0)=='A'||str.at(0)=='E'||str.at(0)=='I'||str.at(0)=='O'||str.at(0)=='U'){
        printf("\nit's a consonant");    
        }
    
    




}