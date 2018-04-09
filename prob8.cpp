#include <iostream>
using namespace std;

int tam2 (char V[]){
    char *p1=V;
    char *p2=V;
    while (*p2 != '\0'){
        p2++;
    }
    return p2-p1;
}

char * invertir(char *s){
    char *t= new char[10]; // reserva de espacio de memoria
    int tam =tam2(s);
    for (int i =0;i<tam;i++){
        *(t+i)=*(s+tam-1-i);
    }
    *(t+tam)='\0';
    return t;
}

int main()
{
  int i=0,op;
  while(i==0)
  {
    char cad[] = "";
    cout<<"\t\tINVERTIENDO PALABRAS\n"<<endl;
    cout<<"Palabra?  ";
    cin>> cad;
    cout<<"Cadena invertida invertida: "<<invertir(cad)<<endl;
    cout<<"\nPara Salir ingrese 1"<<endl;
    cout<<"Para continuar ingrese otro numero"<<endl;
    cout<<"Salir? ";cin>>op;
    cout<<"--------------------------------------------\n"<<endl;
    if(op==1)
      break;
  }
}
