#include <iostream>

using namespace std;

int main()
{
    int a, b, d, r;
    cout << "Digame numero a" << endl;
    cin >> a;
    cout<<"Digame numero b"<<endl;
    cin>>b;
    if(b>0){
        d=a/b;
        r=a%b;
        cout<<d<<" "<<r<<endl;


    }else{
        cout<<"La operacion no se puede realizar"<<endl;
    }


    return 0;
}