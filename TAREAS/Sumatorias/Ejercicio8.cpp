#include <iostream>
using namespace std;

int main() {
    int N, SN = 0, termino = 1, incremento = 1;

    cout << "Ingrese el número de términos N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        SN += termino; 
        incremento++; 
        termino += incremento;
    }

    cout << "La suma de los primeros " << N << " términos es: " << SN << endl;

    return 0;
}
