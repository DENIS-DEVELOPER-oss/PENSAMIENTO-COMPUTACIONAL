#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tiempo, velocidad;
    cin >> tiempo >> velocidad;
    double t_h = tiempo / 60.0;
    double d = t_h * velocidad;
    double c = d / 12.0;
    cout << fixed << setprecision(2);
    cout << d << " km" << endl;
    cout << c << " Litros" << endl;

    return 0;
}
