#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double B_mayor = 34.0;  
    double B_menor = 29.4; 
    double altura = 20.0;

    double volumen = (1.0 / 3.0) * altura * (pow(B_mayor / 2, 2) + pow(B_menor / 2, 2) + (B_mayor / 2) * (B_menor / 2));

    cout << "El volumen del tronco de la pirámide es: " << volumen << " cm³" << endl;

    return 0;
}
