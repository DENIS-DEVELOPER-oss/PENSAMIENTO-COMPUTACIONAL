#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int d,xa,ya,xb,yb;
    cin>>xa>>ya>>xb>>yb;
    d=sqrt((xa-xb)+(ya-yb)*(ya-yb));
    if(d<150)
    {
        cout<<"sana"<<endl<<"A y B estan a mas de 150cm de distancia";}
        else if(d==150){
            cout<<"sana"<<endl<<"A y B estan a exactactamente 150 cm de distancia";
        }else{
            cout<<"insana"<<endl<<"A y B estan a menos de 150 cm de distancia";
        }
        return 0;
    }