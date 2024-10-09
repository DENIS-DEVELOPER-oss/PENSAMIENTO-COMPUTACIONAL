#include <iostream>
using namespace std;

int main() {
    double cm2, m2;
    cout << "Ingresa el valor en Centímetros Cuadrados (cm²): ";
    cin >> cm2;
    m2 = cm2 / 10000;
    cout << cm2 << " centímetros cuadrados es igual a " << m2 << " metros cuadrados." << endl;

    return 0;
}
