#include <iostream>
using namespace std;

int main() {
    double lado;
    cout << "Ingrese el valor del lado del cubo: ";
    cin >> lado;
    double volumen = lado * lado * lado;
    cout << "El volumen del cubo es: " << volumen << endl;
    return 0;
}
