#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
    srand(time(0));
    int computadora;
    computadora = rand() % 3 + 1;

    cout << "La computadora eligió: "<<computadora;


    return 0;
}