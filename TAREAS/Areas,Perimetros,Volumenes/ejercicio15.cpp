#include <iostream>
using namespace std;

int main() {
    float a;
    cout << "Ingrese el valor del lado del cuadrado (a): ";
    cin >> a;

    float area_cuadrado = a * a;

    float area_triangulo1 = (a * a) / 4;
    float area_triangulo2 = (a * a) / 8;

    float area_sombreada = area_cuadrado - (area_triangulo1 + area_triangulo2);

    cout << "El área de la región sombreada es: " << area_sombreada << endl;
    
    return 0;
}
