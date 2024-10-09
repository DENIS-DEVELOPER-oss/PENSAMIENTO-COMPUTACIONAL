#include <iostream>
using namespace std;

int main() {
    double hm3, m3;

    cout << "Ingresa el valor en Hectómetros Cúbicos (hm³): ";
    cin >> hm3;

    m3 = hm3 * 1000000;

    cout << hm3 << " hectómetros cúbicos es igual a " << m3 << " metros cúbicos." << endl;

    return 0;
}
