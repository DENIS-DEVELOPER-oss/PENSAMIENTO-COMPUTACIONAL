#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double largo, ancho, altura_prisma, altura_piramide;
    cout << "Ingrese el largo de la base (m): ";
    cin >> largo;
    cout << "Ingrese el ancho de la base (m): ";
    cin >> ancho;
    cout << "Ingrese la altura del prisma (m): ";
    cin >> altura_prisma;
    cout << "Ingrese la altura de la pirámide (m): ";
    cin >> altura_piramide;

    double volumen_prisma = largo * ancho * altura_prisma;
    double volumen_piramide = (1.0 / 3.0) * largo * ancho * altura_piramide;

    double volumen_total = volumen_prisma + volumen_piramide;

    double area_prisma = 2 * (largo * ancho + largo * altura_prisma + ancho * altura_prisma);

    double area_piramide = largo * sqrt(pow(ancho / 2, 2) + pow(altura_piramide, 2)) + ancho * sqrt(pow(largo / 2, 2) + pow(altura_piramide, 2));
    double area_total = area_prisma + area_piramide;

    cout << "Volumen total del sólido (m³): " << volumen_total << endl;
    cout << "Superficie total del sólido (m²): " << area_total << endl;

    return 0;
}
