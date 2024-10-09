#include <iostream>
using namespace std;

int main() {
    double dg, hg, dag, g;

    cout << "Ingresa el valor en Decigramos (dg): ";
    cin >> dg;

    hg = dg / 1000;
    dag = dg / 100;
    g = dg / 10;

    cout << dg << " decigramos (dg) es igual a " << hg << " hectogramos (hg), " << dag << " decagramos (dag) y " << g << " gramos (g)." << endl;

    return 0;
}
