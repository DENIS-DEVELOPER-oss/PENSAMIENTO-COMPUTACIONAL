#include <iostream>
using namespace std;

int main() {
    double gb, kb;

    cout << "Ingresa el valor en Gigabytes (GB): ";
    cin >> gb;

    kb = gb * 1024 * 1024;

    cout << gb << " Gigabytes es igual a " << kb << " Kilobytes." << endl;

    return 0;
}
