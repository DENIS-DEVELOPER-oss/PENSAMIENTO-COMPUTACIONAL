#include <iostream>
using namespace std;

int main() {
    int dias, segundos;

    cout << "Ingresa el número de días: ";
    cin >> dias;
    segundos = dias * 86400;

    cout << "En " << dias << " días, hay " << segundos << " segundos." << endl;

    return 0;
}
