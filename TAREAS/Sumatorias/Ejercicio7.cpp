#include <iostream>
using namespace std;

int main() {
    int suma_pares = 0, suma_impares = 0;

    for (int i = 20; i <= 100; i++) {
        if (i % 2 == 0) {
            suma_pares += i;
        } else {
            suma_impares += i;
        }
    }

    cout << "La suma de los números pares entre 20 y 100 es: " << suma_pares << endl;
    cout << "La suma de los números impares entre 20 y 100 es: " << suma_impares << endl;

    return 0;
}
