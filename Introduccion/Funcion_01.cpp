#include <iostream>
using namespace std;

void Suma(int a, int b);
int main(){
int N1,N2;
cout<< "Introduce el numero 1:";
cin>>N1;
cout<< "Introduce el numero 2:";
cin>>N2;
Suma(N1,N2);
return 0;
}
void Suma(int a, int b){
int c = a + b;
cout<< "El valor de la suma es:"<<c;
}
