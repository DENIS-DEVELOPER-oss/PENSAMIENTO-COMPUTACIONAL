#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

int main() {
    double radio = 5.0;
    double altura_cono = 12.0;

    double volumen_semiesfera = (2.0 / 3.0) * PI * pow(radio, 3);

    double volumen_cono = (1.0 / 3.0) * PI * pow(radio, 2) * altura_cono;
    double volumen_total = volumen_semiesfera + volumen_cono;

    cout << "El volumen total de la figura es: " << volumen_total << " cm³" << endl;

    return 0;
}
