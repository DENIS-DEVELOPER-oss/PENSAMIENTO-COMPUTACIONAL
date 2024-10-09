#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
using namespace std;
int main() {
    int horas = 0, minutos = 0, segundos = 0;

    while (true) {  
        system("clear"); 
        
        cout << setfill('0') << setw(2) << horas << ":"
             << setfill('0') << setw(2) << minutos << ":"
             << setfill('0') << setw(2) << segundos << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
        segundos++;
        if (segundos == 60) {
            segundos = 0;
            minutos++;
        }
        if (minutos == 60) {
            minutos = 0;
            horas++;
        }
        if (horas == 24) {
            horas = 0;
        }
    }

    return 0;
}