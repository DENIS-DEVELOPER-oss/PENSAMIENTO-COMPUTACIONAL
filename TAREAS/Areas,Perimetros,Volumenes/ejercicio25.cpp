#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float lado_base = 9;   
    float altura_prisma = 9; 
    float altura_piramide = 3;

    float volumen_prisma = pow(lado_base, 2) * altura_prisma;

    float volumen_piramide = (1.0 / 3.0) * pow(lado_base, 2) * altura_piramide;

    float volumen_total = volumen_prisma + volumen_piramide;

    cout << "El volumen total de la figura es: " << volumen_total << " cm³" << endl;

    return 0;
}
