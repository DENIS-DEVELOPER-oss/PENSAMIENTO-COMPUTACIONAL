#include <iostream>
using namespace std;

int main() {
    double fahrenheit, kelvin;

    cout << "Ingresa el valor en Grados Fahrenheit: ";
    cin >> fahrenheit;

    kelvin = ((fahrenheit - 32) * 5 / 9) + 273.15;

    cout << fahrenheit << " grados Fahrenheit es igual a " << kelvin << " grados Kelvin." << endl;

    return 0;
}
