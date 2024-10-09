#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

int main() {
    float a;
    cout << "Ingrese el valor de 'a': ";
    cin >> a;

    float area_cuadrado = pow(2 * a, 2);

    float area_circulos = PI * pow(a, 2);

    float area_sombreada = area_cuadrado - area_circulos;

    cout << "El área de la región sombreada es: " << area_sombreada << endl;

    return 0;
}
