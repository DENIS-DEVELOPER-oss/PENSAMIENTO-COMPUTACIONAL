#include <iostream>
using namespace std;

int main() {
    double kelvin, fahrenheit;

    cout << "Ingresa el valor en Grados Kelvin: ";
    cin >> kelvin;

    fahrenheit = ((kelvin - 273.15) * 9 / 5) + 32;

    cout << kelvin << " grados Kelvin es igual a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}
