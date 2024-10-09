#include <iostream>
using namespace std;

int main() {
    double celsius, kelvin;

    cout << "Ingresa el valor en Grados Centígrados: ";
    cin >> celsius;

    kelvin = celsius + 273.15;

    cout << celsius << " grados centígrados es igual a " << kelvin << " grados Kelvin." << endl;

    return 0;
}
