#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Ingresa el valor en Grados Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << fahrenheit << " grados Fahrenheit es igual a " << celsius << " grados Centígrados." << endl;

    return 0;
}
