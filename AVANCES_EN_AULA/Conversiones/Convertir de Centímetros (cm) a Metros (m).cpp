#include <iostream>
using namespace std;

int main() {
    double cm, m;

    cout << "Ingresa el valor en Centímetros (cm): ";
    cin >> cm;
    m = cm / 100;
    cout << cm << " centímetros es igual a " << m << " metros." << endl;

    return 0;
}
