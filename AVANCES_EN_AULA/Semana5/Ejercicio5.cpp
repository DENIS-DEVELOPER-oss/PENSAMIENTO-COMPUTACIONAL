#include <iostream>
using namespace std;

int main() {
    int N, a = 0, b = 1, temp;
    cout << "Ingrese N: ";
    cin >> N;
    cout << a << " " << b << " ";
    for(int i = 3; i <= N; i++) {
        temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
    return 0;
}
