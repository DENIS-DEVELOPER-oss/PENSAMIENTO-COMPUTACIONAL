#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << (i % 2 == 0 ? 0 : 1) << " ";
    }
    return 0;
}
