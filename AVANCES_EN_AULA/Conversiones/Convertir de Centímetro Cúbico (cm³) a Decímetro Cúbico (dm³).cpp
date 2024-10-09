#include <iostream>
using namespace std;

int main() {
    double cm3, dm3;

    cout << "Ingresa el valor en Centímetros Cúbicos (cm³): ";
    cin >> cm3;
    dm3 = cm3 / 1000;
    cout << cm3 << " centímetros cúbicos es igual a " << dm3 << " decímetros cúbicos." << endl;

    return 0;
}
