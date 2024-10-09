#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C;
    double x1, x2;

    cin >> A >> B >> C;

    double discriminante = B * B - 4 * A * C;

    x1 = (-B + sqrt(discriminante)) / (2 * A);
    x2 = (-B - sqrt(discriminante)) / (2 * A);

    cout << x1 << " " << x2 << endl;

    return 0;
}
