#include <iostream>
using namespace std;

int main() {
    double largo, ancho, altura;
    cout << "Ingrese el largo: ";
    cin >> largo;
    cout << "Ingrese el ancho: ";
    cin >> ancho;
    cout << "Ingrese la altura: ";
    cin >> altura;
    double volumen = largo * ancho * altura;
    cout << "El volumen del paralelepípedo es: " << volumen << endl;
    return 0;
}
