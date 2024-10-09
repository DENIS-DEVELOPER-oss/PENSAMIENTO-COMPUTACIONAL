#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

int main() {
    double a, b;
    cout << "Ingrese el valor del semieje mayor (a): ";
    cin >> a;
    cout << "Ingrese el valor del semieje menor (b): ";
    cin >> b;
    double area = PI * a * b;
    double perimetro = PI * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;
    return 0;
}
