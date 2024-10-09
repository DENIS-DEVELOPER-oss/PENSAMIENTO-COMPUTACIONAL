#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

int main() {
    double r_mayor = 6.0;
    double r_menor = 3.0;
    double altura = 15.0;
    double volumen = (1.0 / 3.0) * PI * altura * (pow(r_mayor, 2) + pow(r_menor, 2) + r_mayor * r_menor);

    cout << "El volumen del tronco del cono es: " << volumen << " cm³" << endl;

    return 0;
}
