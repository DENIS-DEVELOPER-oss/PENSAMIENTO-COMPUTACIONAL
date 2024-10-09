#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += (2 * i + 5);
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}