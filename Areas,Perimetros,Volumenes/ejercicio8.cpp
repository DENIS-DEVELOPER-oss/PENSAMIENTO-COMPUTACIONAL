#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float lado, apotema, area, perimetro;

    // Solicitar al usuario que ingrese el valor del lado y la apotema del hexágono
    cout << "Ingrese el valor del lado del hexágono: ";
    cin >> lado;
    cout << "Ingrese el valor de la apotema del hexágono: ";
    cin >> apotema;

    // Calcular el perímetro del hexágono
    perimetro = 6 * lado;

    // Calcular el área del hexágono
    area = (perimetro * apotema) / 2;

    // Mostrar el resultado
    cout << "El perímetro del hexágono es: " << perimetro << endl;
    cout << "El área del hexágono es: " << area << endl;

    return 0;  // Finaliza el programa
}
