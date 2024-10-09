#include<iostream>
using namespace std;
int main(){

    int T;
    cin >> T;

    if (T < 21) {
        cout << "fria!" << endl;
        if (T < 15) {
            cout << "RIP escamitas :(" << endl;
        }
    } else if (T >= 21 && T <= 29) {
        cout << "tibia" << endl;
    } else {
        cout << "caliente!" << endl;
        if (T > 34) {
            cout << "RIP escamitas :(" << endl;
        }
    }
    return 0;
}
