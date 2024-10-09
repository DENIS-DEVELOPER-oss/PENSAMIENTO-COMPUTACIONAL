#include <iostream>
using namespace std;

int main() {
    int N, num = 3;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            cout << num << " ";
            num += 2;
        } else {
            cout << 1 << " ";
        }
    }
    return 0;
}
