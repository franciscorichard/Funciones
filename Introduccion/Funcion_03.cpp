#include <iostream>
using namespace std;

int Max(int a, int b);
int main(){
int N1,N2,N3;
cout<< "Introduce el numero 1:";
cin>>N1;
cout<< "Introduce el numero 2:";
cin>>N2;
cout<< "Introduce el numero 3:";
cin>>N3;
int max1 = Max(N1,N2);
int max2 = Max(max1,N2);
cout<<"El numero mayor es:" <<max2;
return 0;
}
int Max(int a, int b){
int c;
if(a>b){c=a;}
else{ c=b;}
return c;
}
