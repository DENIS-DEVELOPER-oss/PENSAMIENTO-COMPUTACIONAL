#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float baseMayor, baseMenor, altura, area;

    // Solicitar al usuario que ingrese las bases y la altura del trapecio
    cout << "Ingrese el valor de la base mayor del trapecio: ";
    cin >> baseMayor;
    cout << "Ingrese el valor de la base menor del trapecio: ";
    cin >> baseMenor;
    cout << "Ingrese el valor de la altura del trapecio: ";
    cin >> altura;

    // Calcular el área del trapecio
    area = ((baseMayor + baseMenor) / 2) * altura;

    // Mostrar el resultado
    cout << "El área del trapecio es: " << area << endl;

    return 0;  // Finaliza el programa
}
