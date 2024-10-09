#include <iostream>
using namespace std;

int main() {
    double kelvin, celsius;

    cout << "Ingresa el valor en Grados Kelvin: ";
    cin >> kelvin;

    celsius = kelvin - 273.15;

    cout << kelvin << " grados Kelvin es igual a " << celsius << " grados centígrados." << endl;

    return 0;
}
