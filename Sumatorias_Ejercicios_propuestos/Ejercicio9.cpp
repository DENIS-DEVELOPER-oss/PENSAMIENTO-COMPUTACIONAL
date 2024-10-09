#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    double X, SX = 0, c, p, t;

    cout << "Ingrese el valor de X: ";
    cin >> X;

    cout << "Ingrese el número de términos N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        p = pow(X, i);

        if (i % 2 == 0) {
            c = 2 * (i / 2);
            t = (c * p) / (c * i);
            SX -= t;
        } else {
            c = 1 + ((i - 1) / 2);
            t = (c * p) / (c * i);
            SX += t;
        }
    }

    cout << "El resultado de la sumatoria es: " << SX << endl;

    return 0;
}

