#include <iostream>
using namespace std;

int main() {
    int N;
    double x, ST = 0.0;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el número de términos N: ";
    cin >> N;
    for (int i = 1, exponente = 1; i <= N; i++, exponente++) {
        double fact = 1;
        for (int j = 1; j <= exponente; j++) {
            fact *= j;
        }
        ST += pow(x, exponente) / fact;
        exponente++;  
    }
    cout << "La sumatoria ST es: " << ST << endl;

    return 0;
}
