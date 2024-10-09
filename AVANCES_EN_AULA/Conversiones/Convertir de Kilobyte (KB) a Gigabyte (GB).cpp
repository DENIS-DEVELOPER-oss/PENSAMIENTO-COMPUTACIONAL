#include <iostream>
using namespace std;

int main() {
    double kb, gb;

    cout << "Ingresa el valor en Kilobytes (KB): ";
    cin >> kb;

    gb = kb / (1024 * 1024);

    cout << kb << " Kilobytes es igual a " << gb << " Gigabytes." << endl;

    return 0;
}
