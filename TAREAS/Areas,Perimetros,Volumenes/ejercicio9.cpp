#include <iostream>
using namespace std;

int main() {
    float lado, apotema, area, perimetro;

    cout << "Ingrese el valor del lado del heptágono: ";
    cin >> lado;
    cout << "Ingrese el valor de la apotema del heptágono: ";
    cin >> apotema;

    perimetro = 7 * lado;

    area = (perimetro * apotema) / 2;

    cout << "El perímetro del heptágono es: " << perimetro << endl;
    cout << "El área del heptágono es: " << area << endl;

    return 0;
}
