#include <iostream>
using namespace std;
int main() {
    int T;
    cin>>T;
    switch(T)
    {
    case 12:cout<<T*2; break;
    case 15:cout<<T*2.2; break;
    case 18:cout<<T*4.5; break;
    case 19:cout<<T*6; break;
    case 23:cout<<T*6; break;
    case 25:cout<<T*6; break;
    case 29:cout<<T*5; break;
    defaul:cout<<"No existe la clave"; break;
    }
    cout<<"el costo es:";
   return 0;
}
  