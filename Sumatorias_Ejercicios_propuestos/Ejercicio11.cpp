#include <iostream>
using namespace std;

int main() {
    int N;
    double ST = 0.0;

    cout << "Ingrese el número de términos N: ";
    cin >> N;

    int sumador = 7;   // Valor inicial que sigue la serie de múltiplos de 7
    int restador = 1;  // Valor inicial que sigue la serie de números consecutivos

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 1) {
            ST += sumador; 
            sumador += 7;
        } else {
            ST -= restador;
            restador++;      
        }
    }

    cout << "La sumatoria ST es: " << ST << endl;

    return 0;
}
