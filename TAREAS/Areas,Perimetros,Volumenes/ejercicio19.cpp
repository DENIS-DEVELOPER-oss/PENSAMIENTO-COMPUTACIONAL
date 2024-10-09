#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float lado_base, altura_prisma, altura_piramide;
    cout << "Ingrese el lado de la base del prisma (cm): ";
    cin >> lado_base;
    cout << "Ingrese la altura del prisma (cm): ";
    cin >> altura_prisma;
    cout << "Ingrese la altura de la pirámide (cm): ";
    cin >> altura_piramide;

    float volumen_prisma = pow(lado_base, 2) * altura_prisma;
    float volumen_piramide = (1.0 / 3.0) * pow(lado_base, 2) * altura_piramide;
    float volumen_total = volumen_prisma + volumen_piramide;

    float area_prisma = 4 * (lado_base * altura_prisma);

    float area_piramide = 4 * (0.5 * lado_base * sqrt(pow(lado_base / 2, 2) + pow(altura_piramide, 2)));

    float area_total = area_prisma + area_piramide + pow(lado_base, 2);

    cout << "Volumen total del sólido (cm³): " << volumen_total << endl;
    cout << "Superficie total del sólido (cm²): " << area_total << endl;

    return 0;
}
