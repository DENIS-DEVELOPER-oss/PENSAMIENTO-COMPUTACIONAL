#include <iostream>
using namespace std;

int main() {
    int N;
    double suma = 0, numero;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> numero;
        suma += numero;
    }
    cout << suma / N << endl;
    return 0;
}
