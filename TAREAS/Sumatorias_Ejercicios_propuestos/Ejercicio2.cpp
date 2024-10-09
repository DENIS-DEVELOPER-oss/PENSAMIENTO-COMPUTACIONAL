#include <iostream>
using namespace std;

int main() {
    for (int tabla = 1; tabla <= 10; tabla++) {
        cout << "Tabla del " << tabla << endl;
        for (int i = 1; i <= 10; i++) {
            cout << tabla << " x " << i << " = " << tabla * i << endl;
        }
        cout << endl; 
    }

    return 0;
}
