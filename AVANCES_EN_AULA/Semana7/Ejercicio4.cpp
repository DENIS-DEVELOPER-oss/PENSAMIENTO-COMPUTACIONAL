#include <iostream>
using namespace std;
int main() {
    int N, numero, mayor;
    cout << "Ingrese la cantidad de números N: ";
    cin >> N;
    cout << "Ingrese un número: ";
    cin >> numero;
    mayor = numero;
    for (int i = 1; i < N; i++) {
        cout << "Ingrese un número: ";
        cin >> numero;
        if (numero > mayor) {
            mayor = numero;
        }
    }
    cout << "El número mayor es: " << mayor << endl;

    return 0;
}
