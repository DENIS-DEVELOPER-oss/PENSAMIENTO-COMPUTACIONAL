#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int a,n;
    cout<<"ingrese valor en n:";
    cin>>n;
    a=n/12;
    if(n%12==0){
        cout<<a<<" "<<"docena de manzanas";
        }
    else{
        cout<<" ";
    }
   return 0;
}