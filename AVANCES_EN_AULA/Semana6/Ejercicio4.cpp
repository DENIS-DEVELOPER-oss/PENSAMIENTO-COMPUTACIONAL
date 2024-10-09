#include <iostream>
using namespace std;

int main() {
    int N, par = 2;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << par << " ";
        par += 2;
    }
    return 0;
}
