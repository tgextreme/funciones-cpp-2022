#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tamanyo1;
    int tamanyo2;
    cin >> tamanyo1;
    vector<double> v1(tamanyo1);
    for (int i = 0; i < tamanyo1; i++)
    {
        cin >> v1[i];
    }
    cin >> tamanyo2;
    vector<double> v2(tamanyo2);
    for (int i = 0; i < tamanyo2; i++)
    {
        cin >> v2[i];
    }

    vector<double> v3(tamanyo1 + tamanyo2);

    int actual = 0;
    for (int i = 0; i < tamanyo1; i++)
    {
        v3[actual] = v1[i];
        actual++;
    }

    for (int i = 0; i < tamanyo1; i++)
    {
        v3[actual] = v1[i];
        actual++;
    }

    for (int i = 0; i < tamanyo2 + tamanyo1; i++)
    {
        cout << v3[i] << endl;
    }

    /*int actual=0;
    for(int i=0;i< tamanyo2+tamanyo1;i++){
        if(actual==tamanyo1){
            actual=
        }
        cin>>v2[i];
    }*/
}
