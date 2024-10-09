#include <iostream>
using namespace std;

int main() {
    float lado, apotema, area, perimetro;

    cout << "Ingrese el valor del lado del pentágono: ";
    cin >> lado;
    cout << "Ingrese el valor de la apotema del pentágono: ";
    cin >> apotema;

    perimetro = 5 * lado;

    area = (perimetro * apotema) / 2;

    cout << "El perímetro del pentágono es: " << perimetro << endl;
    cout << "El área del pentágono es: " << area << endl;

    return 0;
}
