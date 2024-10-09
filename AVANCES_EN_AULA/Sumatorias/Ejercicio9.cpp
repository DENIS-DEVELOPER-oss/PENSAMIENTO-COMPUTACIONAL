#include <iostream>
using namespace std;

int main() {
    int N;
    double ST = 0.0; 

    cout << "Ingrese el número de términos N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        ST += (double)i / (i + 1);
    }
    cout << "La suma de los primeros " << N << " términos es: " << ST << endl;

    return 0;
}
