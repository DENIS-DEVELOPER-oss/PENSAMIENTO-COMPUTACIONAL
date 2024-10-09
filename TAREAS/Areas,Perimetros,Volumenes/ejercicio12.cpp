#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

int main() {
    double radio, altura;
    cout << "Ingrese el radio de la base: ";
    cin >> radio;
    cout << "Ingrese la altura: ";
    cin >> altura;
    double volumen = PI * pow(radio, 2) * altura;
    cout << "El volumen del cilindro es: " << volumen << endl;
    return 0;
}
