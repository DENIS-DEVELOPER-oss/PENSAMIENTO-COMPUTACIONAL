#include <iostream>
using namespace std;

int main() {
   int a=0,b=1,c,i,n;
   cout<<"ingrese n:";
   cin>>n;
   cout<<"secuencia de fibonacci:";
   for(i=0;i<=n;i++)
   {
     cout<<a<<",";
      c=a+b;
      a=b;
      b=c; 
   }
   
    return 0;
}