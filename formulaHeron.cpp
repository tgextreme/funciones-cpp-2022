#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a, b, c, s, area;
    cout<<"Digame la parte a"<<endl;
    cin>>a;
    cout<<"Digame la parte b"<<endl;
    cin>>b;
    cout<<"Digame la parte c"<<endl;
    cin>>c;
    
     s=(a+b+c)/2;
     cout<<s<<endl;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<area<<endl;
}