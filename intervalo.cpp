#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int min, max;
    cout << "Digame el primer numero" << endl;
    cin >> x;
    cout << "Digame el segundo numero" << endl;
    cin >> y;
    if (x > y)
    {
        max = x;
        min = y;
    }
    else
    {
        max = y;
        min = x;
    }
    int contador=min;
    while(contador<=max){
        cout<<" "<<contador<<endl;
        contador++; 
    }
}