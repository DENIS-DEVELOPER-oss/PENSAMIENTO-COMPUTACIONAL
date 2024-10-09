#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    double X, Y, SXY = 0.0;

    cout << "Ingrese el valor de X: ";
    cin >> X;
    cout << "Ingrese el valor de Y: ";
    cin >> Y;
    cout << "Ingrese el número de términos N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        double termino = 0.0;

        if (i == 1) {
            termino = (2 * Y) / (X * tgamma(4));  
        } else if (i == 2) {
            termino = -(X / (5 * Y));
        } else if (i == 3) {
            termino = (8 * Y) / (X * tgamma(10));  
        } else if (i == 4) {
            termino = -(X * tgamma(13)) / (11 * Y);  
        } else if (i == 5) {
            termino = (14 * Y) / (X * tgamma(16)); 
        }

        SXY += termino;
    }

    cout << "La sumatoria SXY es: " << SXY << endl;

    return 0;
}
