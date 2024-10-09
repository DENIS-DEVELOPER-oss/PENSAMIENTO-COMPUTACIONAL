#include <iostream>
using namespace std;

int main() {
    float lado, apotema, area, perimetro;

    cout << "Ingrese el valor del lado del hexágono: ";
    cin >> lado;
    cout << "Ingrese el valor de la apotema del hexágono: ";
    cin >> apotema;

    perimetro = 6 * lado;

    area = (perimetro * apotema) / 2;

    cout << "El perímetro del hexágono es: " << perimetro << endl;
    cout << "El área del hexágono es: " << area << endl;

    return 0;
}
