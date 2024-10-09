#include <iostream>
using namespace std;

int main() {
    int N;
    double SN = 0.0;
    cout << "Ingrese el número de términos N: ";
    cin >> N;

    for (int i = 1, num = 1; i <= N; i++, num += 2) {
        double termino = (double)num / (num * (num + 1)); 

        if (i % 2 == 1) {
            SN += termino;  
        } else {
            SN -= termino;  
        }
    }
    cout << "La suma SN es: " << SN << endl;

    return 0;
}
