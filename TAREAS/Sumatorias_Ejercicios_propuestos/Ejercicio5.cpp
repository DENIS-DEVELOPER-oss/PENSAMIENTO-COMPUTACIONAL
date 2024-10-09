#include <iostream>
using namespace std;

int main() {
    int N, SF = 0;

    cout << "Ingrese el número de términos N: ";
    cin >> N;

    for (int i = 2; i <= 2 * N; i += 2) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        SF += fact; 
    }
    cout << "La suma de los factoriales es: " << SF << endl;

    return 0;
}
