#include <iostream>
#include<stdio.h>
using namespace std;

int Factorial(int a);

int main(){
int N1;
cout<<"Dame el valor del numero:";
cin>>N1;
int fact = Factorial(N1);
cout<<"El factorial de "<<N1<<" es:"<<fact;

return 0;
}
int Factorial(int a){
int i;
int resultado = 1;
for(i=1; i<=a; i++){
    resultado *=i;
}
return resultado;
}
