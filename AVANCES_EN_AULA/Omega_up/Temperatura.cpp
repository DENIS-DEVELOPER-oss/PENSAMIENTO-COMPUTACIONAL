#include <iostream>
#include<cmath>
using namespace std;
int main() {
    float P,Q,a;
    cin>>P>>Q;
    a=pow(P,3)+pow(Q,4)-2*pow(P,2);
    if(a<680)
    {
        cout<<P<<endl<<Q;}
        else{
            cout<<" ";
        }
        return 0;
    }