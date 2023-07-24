#include <iostream>

using namespace std;
/**
 * @brief 
 * Write a program that reads two numbers a and b, and prints all numbers between a and b.
 * 
 * @return int 
 */
int main(){
    int num1, num2, min, max;

    cout<<"Digame el primer numero"<<endl;
    cin>>num1;

    cout<<"Digame el segundo numero"<<endl;
    cin>>num2;

    if(num1>num2){
        max=num1;
        min=num2;
    }else{
        max=num2;
        min=num1;

    }
    min++;
    while (max>min){
        cout<<min<<endl;
        min++;
    }
}