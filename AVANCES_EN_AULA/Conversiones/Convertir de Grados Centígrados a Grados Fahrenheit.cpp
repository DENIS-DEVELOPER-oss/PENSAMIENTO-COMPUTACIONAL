#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Ingresa el valor en Grados Centígrados: ";
    cin >> celsius;

    fahrenheit = celsius * 9 / 5 + 32;

    cout << celsius << " grados centígrados es igual a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}
