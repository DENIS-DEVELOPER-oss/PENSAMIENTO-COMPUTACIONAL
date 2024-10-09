#include <iostream>
using namespace std;

int main() {
    float largo = 25.0;
    float ancho = 15.0;
    float altura = 3.0;

    float volumen_total = largo * ancho * altura;

    float volumen_agua = (4.0 / 5.0) * volumen_total;
    float litros_agua = volumen_agua * 1000;

    cout << "Litros de agua necesarios para llenar 4/5 de la piscina: " << litros_agua << " litros" << endl;

    return 0;
}
