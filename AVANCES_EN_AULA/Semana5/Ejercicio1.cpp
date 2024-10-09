#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int main() {
    srand(time(0));

    int Humano, Computadora;

    cout << "Juego de Piedra, Papel o Tijera" << endl;
    cout << "Elige una opción:" << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cout << "Introduce el número de tu elección (1-3): ";
    cin >> Humano;

    if (Humano < 1 || Humano > 3) {
    cout << "Opción inválida. Debes elegir entre 1, 2 o 3." << endl;
        return 1; 
    }

    Computadora = rand() % 3 + 1;

    cout << "La computadora eligió: ";
    switch (Computadora) {
        case 1: cout << "Piedra" <<endl; break;
        case 2: cout << "Papel" << endl; break;
        case 3: cout << "Tijera" <<endl; break;
    }

    if (Humano == Computadora) {
        cout << "¡Es un empate!" << endl;
    } else if ((Humano == 1 && Computadora == 3) || 
               (Humano == 2 && Computadora == 1) || 
               (Humano == 3 && Computadora == 2)) {
        cout << "¡Ganaste!" << endl;
    } else {
        cout << "¡Perdiste!" << endl;
    }

    return 0;
}