#include <iostream>
#include <cstdlib> // Para usar rand() y srand()
#include <ctime>   // Para usar time()
using namespace std;

int main() // Llamadas telefonicas
{
    int v;
    cout<<"Vamos a jugar"<<endl;
    cout<<"Piedra = 1"<<endl;
    cout<<"Papel = 2"<<endl;
    cout<<"Tijera = 3"<<endl;
    cin >> v;
    srand(time(0));
    int computadora;
    computadora = rand() % 3 + 1;
    switch(v)
    {
        case 1: cout<<"El humano eligio piedra"<<endl; break;
        case 2: cout<<"El humano eligio papel"<<endl; break;
        case 3: cout<<"El humano eligio tijera"<<endl; break;
    }

    switch(computadora)
    {
        case 1: cout<<"La computadora eligio piedra"<<endl;
                if(v==2)
                {
                    cout<<"Gana el humano";
                }
                if(v==3)
                {
                    cout<<"Gana la computadora";
                }
                if(v==1)
                {
                    cout<<"Empate";
                }
                break;
        case 2: cout<<"La computadora eligio papel"<<endl;
                if(v==1)
                {
                    cout<<"Gana la computadora";
                }
                if(v==2)
                {
                    cout<<"Empate";
                }
                if(v==3)
                {
                    cout<<"Gana el humano";
                }
                break;
        case 3: cout<<"La computadora eligio tijera"<<endl;
                if(v==1)
                {
                    cout<<"Gana el humano";
                }
                if(v==2)
                {
                    cout<<"Gana la computadora";
                }
                if(v==3)
                {
                    cout<<"Empate";
                }
                break;
    }
    return 0;
}