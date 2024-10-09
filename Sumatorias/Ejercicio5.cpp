#include <iostream>
using namespace std;

int main() {
    int N, s = 0;

    cout << "Ingrese el número de términos impares N: ";
    cin >> N;

    for (int i = 1, numero_impar = 1; i <= N; i++, numero_impar += 2) {
        s += numero_impar;
    }
    cout << "La suma de los primeros " << N << " números impares es: " << s << endl;

    return 0;
}
