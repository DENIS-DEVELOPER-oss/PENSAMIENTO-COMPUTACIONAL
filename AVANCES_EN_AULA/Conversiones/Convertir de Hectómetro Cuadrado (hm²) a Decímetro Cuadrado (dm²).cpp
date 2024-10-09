#include <iostream>
using namespace std;

int main() {
    double hm2, dm2;

    cout << "Ingresa el valor en Hectómetros Cuadrados (hm²): ";
    cin >> hm2;
    dm2 = hm2 * 1000000;
    cout << hm2 << " hectómetros cuadrados es igual a " << dm2 << " decímetros cuadrados." << endl;

    return 0;
}
