#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float lado, area;

    cout << "Ingrese el valor del lado del octágono: ";
    cin >> lado;

    area = 2 * (1 + sqrt(2)) * pow(lado, 2);

    cout << "El área del octágono es: " << area << endl;

    return 0;
}
