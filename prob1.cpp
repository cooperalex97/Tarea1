#include <iostream>
using namespace std;

void incremento (int n){
    n++;
}

void incremento2 (int n,int &p){
    p= p+n;
}

int main(){
  int n=10, p=5;
  incremento(n); /// paso por valor
  incremento2(n,p); /// paso por referencia
  cout << "Incrementando por Paso por valor      " << n << endl;
  cout << "Incrementado por Paso por referencia " <<p;
}
