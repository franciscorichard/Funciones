#include <iostream>
using namespace std;

void Max(int a, int b);
int main(){
int N1,N2;
cout<< "Introduce el numero 1:";
cin>>N1;
cout<< "Introduce el numero 2:";
cin>>N2;
Max(N1,N2);
return 0;
}
void Max(int a, int b){
if(a > b){
    cout<<a<< " Es mayor";
}
else if(a < b){
    cout<<b<< " Es mayor";
}
else
    cout<<"Los numeros son iguales";

}
