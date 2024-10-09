#include <iostream>
using namespace std;

int main() {
    int altura ,tronco;
    cout<<"ingrese la altura del arbol"<<endl;
    cin>>altura;
    cout<<"ingrese la altura del arbol"<<endl;
    cin>>tronco;

    for (int i = 1; i <= altura; i++) {
        for (int j = altura - i; j > 0; j--) {
            cout << " "; 
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*"; 
        }
        cout << endl;
    }

    for (int i = 0; i < tronco; i++) {
        for (int j = 0; j < altura - 2; j++) {
            cout << " "; 
        }
        cout << "***" << endl;
    }

    return 0;
}
