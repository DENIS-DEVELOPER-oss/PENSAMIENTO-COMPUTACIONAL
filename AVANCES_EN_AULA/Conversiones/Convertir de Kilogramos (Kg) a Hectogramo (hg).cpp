#include <iostream>
using namespace std;

int main() {
    double kg, hg, dag, g;

    cout << "Ingresa el valor en Kilogramos (Kg): ";
    cin >> kg;

    hg = kg * 10;   
    dag = kg * 100; 
    g = kg * 1000;  

    cout << kg << " Kg es igual a " << hg << " hectogramos (hg), " << dag << " decagramos (dag) y " << g << " gramos (g)." << endl;

    return 0;
}