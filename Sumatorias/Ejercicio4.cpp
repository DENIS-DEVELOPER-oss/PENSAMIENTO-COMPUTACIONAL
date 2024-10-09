#include <iostream>
using namespace std;

int main() {
    int n;
    long long p = 1;

    cout << "Ingrese un número n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        p *= i;
    }

    cout << "El Factorial de " << n << " es: " << p << endl;

    return 0;
}