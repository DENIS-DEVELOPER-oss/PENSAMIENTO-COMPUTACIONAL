#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

int main() {
    float radio, altura;
    cout << "Ingrese el radio de la base del cilindro (cm): ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro (sin la semiesfera) (cm): ";
    cin >> altura;

    float volumen_cilindro = PI * pow(radio, 2) * altura;
    float volumen_semiesfera = (2.0 / 3.0) * PI * pow(radio, 3);
    float volumen_total = volumen_cilindro + volumen_semiesfera;

    float area_cilindro = 2 * PI * radio * altura;
    float area_semiesfera = 2 * PI * pow(radio, 2);
    float area_total = area_cilindro + area_semiesfera + PI * pow(radio, 2); // Incluye la base del cilindro

    cout << "Volumen total del sólido (cm³): " << volumen_total << endl;
    cout << "Superficie total del sólido (cm²): " << area_total << endl;

    return 0;
}
