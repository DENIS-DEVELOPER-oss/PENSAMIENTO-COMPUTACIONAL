#include <iostream>
using namespace std;

int main() {
    int N, impar = 1;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << impar << " ";
        impar += 2;
    }
    return 0;
}
