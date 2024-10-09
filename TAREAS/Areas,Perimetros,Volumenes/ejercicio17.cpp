#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

int main() {
    float a;
    cout << "Ingrese el valor de 'a': ";
    cin >> a;

    float area_hexagono = (3 * sqrt(3) / 2) * pow(a, 2);

    float area_circulos = (6 * PI * pow(a / 2, 2)) / 4;  // Seis sectores de círculos

    float area_sombreada = area_hexagono - area_circulos;

    cout << "El área de la región sombreada es: " << area_sombreada << endl;

    return 0;
}
