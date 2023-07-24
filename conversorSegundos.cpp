#include <iostream>

using namespace std;

int main(){
    double segundos=(double)10900;
    double horas, horas_r, minutos;
    cout<<"Digame el numero de segundos"<<endl;
    cin>>segundos;
    horas=segundos/3600;
    minutos=( (horas-((double)((int)horas)))*60);
    segundos=( (minutos-((double)((int)minutos)))*60);
    cout<<((int)horas)<<" horas "<<((int)minutos)<< " minutos " <<((int)segundos)<<" segundos "<<endl;
    
}