#include <iostream>
using namespace std;

int main() {
    double litros, mililitros;

    cout << "Ingresa el valor en Litros (L): ";
    cin >> litros;

    mililitros = litros * 1000;

    cout << litros << " litros es igual a " << mililitros << " mililitros (ml)." << endl;

    return 0;
}
