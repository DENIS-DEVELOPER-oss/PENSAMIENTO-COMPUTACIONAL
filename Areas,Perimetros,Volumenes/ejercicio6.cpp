#include <iostream>
#include <cmath>  // Incluye la biblioteca para funciones matemáticas
using namespace std;

int main() {
    // Declaración de variables
    float lado, area;

    // Solicitar al usuario que ingrese el valor del lado del octágono
    cout << "Ingrese el valor del lado del octágono: ";
    cin >> lado;

    // Calcular el área del octágono
    area = 2 * (1 + sqrt(2)) * pow(lado, 2);

    // Mostrar el resultado
    cout << "El área del octágono es: " << area << endl;

    return 0;  // Finaliza el programa
}
