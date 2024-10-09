#include <iostream>
using namespace std;

int main() {
    int s = 0;
    for (int i = 2; i <= 3; i++) {
        for (int j = 2; j <= 4; j++) {
            s += (i + j);
        }
    }
    cout << "La suma es: " << s << endl;

    return 0;
}
