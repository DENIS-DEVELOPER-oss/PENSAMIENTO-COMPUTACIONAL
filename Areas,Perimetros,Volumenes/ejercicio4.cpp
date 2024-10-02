#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    float radio, area;

    cout << "Ingrese el valor del radio del círculo: ";
    cin >> radio;

    area = 3.1416 * pow(radio, 2);

    cout << "El área del círculo es: " << area << endl;

    return 0;  
}
