#include <iostream>
using namespace std;

int main() {
    int N, num = 1, incremento = 1;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << num << " ";
        incremento++;
        num += incremento;
    }
    return 0;
}
