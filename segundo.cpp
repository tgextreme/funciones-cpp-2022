/*
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Digame numero a" << endl;
    cin >> a;
    cout<<"Digame numero b"<<endl;
    cin>>b;
    if(b>0){
        
        
        cout<<a/b<<" "<<a%b<<endl;


    }else{
        cout<<"La operacion no se puede realizar"<<endl;
    }


    return 0;
}