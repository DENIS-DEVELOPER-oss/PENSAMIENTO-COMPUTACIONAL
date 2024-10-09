#include <iostream>
using namespace std;

int main() {
    double km, m;

    cout << "Ingresa el valor en Kilómetros (km): ";
    cin >> km;

    m = km * 1000;

    cout << km << " kilómetros es igual a " << m << " metros." << endl;

    return 0;
}
