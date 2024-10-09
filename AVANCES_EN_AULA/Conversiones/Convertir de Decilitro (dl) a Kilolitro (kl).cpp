#include <iostream>
using namespace std;

int main() {
    double dl, kl;

    cout << "Ingresa el valor en Decilitros (dl): ";
    cin >> dl;

    kl = dl / 10000;  // 1 Kilolitro = 10,000 Decilitros

    cout << dl << " decilitros (dl) es igual a " << kl << " kilolitros (kl)." << endl;

    return 0;
}
