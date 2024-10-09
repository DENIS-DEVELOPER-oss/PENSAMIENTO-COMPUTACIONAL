#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float lado, apotema, area, perimetro;

    // Solicitar al usuario que ingrese el valor del lado y la apotema del heptágono
    cout << "Ingrese el valor del lado del heptágono: ";
    cin >> lado;
    cout << "Ingrese el valor de la apotema del heptágono: ";
    cin >> apotema;

    // Calcular el perímetro del heptágono
    perimetro = 7 * lado;

    // Calcular el área del heptágono
    area = (perimetro * apotema) / 2;

    // Mostrar el resultado
    cout << "El perímetro del heptágono es: " << perimetro << endl;
    cout << "El área del heptágono es: " << area << endl;

    return 0;  // Finaliza el programa
}
