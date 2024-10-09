#include <iostream>
using namespace std;

int main() {
    float baseMayor, baseMenor, altura, area;

    cout << "Ingrese el valor de la base mayor del trapecio: ";
    cin >> baseMayor;
    cout << "Ingrese el valor de la base menor del trapecio: ";
    cin >> baseMenor;
    cout << "Ingrese el valor de la altura del trapecio: ";
    cin >> altura;

    area = ((baseMayor + baseMenor) / 2) * altura;

    cout << "El área del trapecio es: " << area << endl;
    return 0; 
}
