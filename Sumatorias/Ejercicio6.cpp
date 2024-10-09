#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;
    cout << "Ingrese el número de términos  N: ";
    cin >> N;

    for (int i = 1, numero_par = 2; i <= N; i++, numero_par += 2) {
        suma += numero_par;
    }
    cout << "La suma de los primeros " << N << " números pares es: " << suma << endl;

    return 0;
}
