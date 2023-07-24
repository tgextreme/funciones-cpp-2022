#include <iostream>
#include <cmath>

using namespace std;

double g(double x, double y, double t)
{
    double solucion = ((sqrt(2 * t - 4)) / ((x * x) - (y * y)));
    return solucion;
}

int main()
{
    double x, y, t, total;
    cin >> x;
    cin >> y;
    cin >> t;
    total = g(x, y, t);
    cout << total << endl;
}