#include <iostream>
using namespace std;

int main() {
    int mb;
    cout << "Ingresa el valor de mb: ";
    cin >> mb;

    switch (mb / 500) {
        case 0:
            cout << mb * 2;
            break;
        case 1:
            cout << mb * 1.80;
            break;
        case 2:
        case 3:
            cout << mb * 1.60;
            break;
        case 4:
            cout << mb * 1.40;
            break;
        default:
            cout << mb * 0.50;
    }

    return 0;
}

