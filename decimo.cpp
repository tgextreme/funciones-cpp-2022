#include <iostream>

using namespace std;

int main(){

    int temperatura;
    cout<<"Dígame una temperatura"<<endl;
    cin>>temperatura;
    if(temperatura>30){
        cout<<"hot"<<endl;
        if(temperatura>=100){
            cout<<"water boils"<<endl;
        }
    }else if(temperatura<10){
        cout<<"cold"<<endl;
        if(temperatura<=0){
            cout<<"water is freeze"<<endl;
        }
    }else{
        cout <<"ok"<<endl;
    }

}