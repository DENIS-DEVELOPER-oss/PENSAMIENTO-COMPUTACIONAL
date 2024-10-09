#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float lado, apotema, area, perimetro;

    // Solicitar al usuario que ingrese el valor del lado y apotema del pentágono
    cout << "Ingrese el valor del lado del pentágono: ";
    cin >> lado;
    cout << "Ingrese el valor de la apotema del pentágono: ";
    cin >> apotema;

    // Calcular el perímetro del pentágono
    perimetro = 5 * lado;

    // Calcular el área del pentágono
    area = (perimetro * apotema) / 2;

    // Mostrar el resultado
    cout << "El perímetro del pentágono es: " << perimetro << endl;
    cout << "El área del pentágono es: " << area << endl;

    return 0;  // Finaliza el programa
}
