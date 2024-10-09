#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

int main() {
    double radio;
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    double volumen = (4.0 / 3.0) * PI * pow(radio, 3);
    cout << "El volumen de la esfera es: " << volumen << endl;
    return 0;
}
