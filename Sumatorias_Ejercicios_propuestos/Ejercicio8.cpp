#include <iostream>
using namespace std;

int main() {
    int N;
    double SUM = 0.0;
    cout << "Ingrese el número de términos N: ";
    cin >> N;
    for (int i = 1, num = 2, den = 3; i <= N; i++, num += 2, den += 2) {
        if (i % 2 == 1) {
            SUM += (double)num / den;
        } else {
            SUM -= (double)num / den;
        }
    }
    cout << "La suma SUM es: " << SUM << endl;

    return 0;
}
