#include <iostream>
using namespace std;

int main() {
    int N;
    double SUM = 0.0;
    cout << "Ingrese el número de términos N: ";
    cin >> N;
    for (int i = 2; i <= N + 1; i++) {
        if (i % 2 == 0) {
            SUM += (double)i / (i + 1);
        } else {
            SUM -= (double)i / (i + 1);
        }
    }

    cout << "La suma SUM es: " << SUM << endl;

    return 0;
}
