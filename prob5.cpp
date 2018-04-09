#include <iostream>
using namespace std;

int tam1 (char V[]){
    int cont = 0;
    int i=0;
    //for  (int i=0;V[i]!='\0';i++)
    while(V[i]!='\0')
    {
        i++;
        cont++;
    }
    return cont;

}
int tam2 (char V[]){
    char *p1=V;
    char *p2=V;
    while (*p2 != '\0'){
        p2++;
    }
    return p2-p1;
}

int main()
{
  int s=0,op;
  while(s==0)
  {
    char a[] = "hola mi amor";
    cout<<" --->Usando arreglos"<<endl;
    cout<<"\t\tEl tamaño de la cadena es: "<<tam1(a)<<endl;
    cout<<" --->Usando punteros"<<endl;
    cout << "\t\tEl tamaño de la cadena es: "<<tam2(a)<<endl;
    cout<<"Para Salir ingrese 1"<<endl;
    cout<<"Para Continuar ingrese otro numero"<<endl;
    cout<<"Salir? ";cin>>op;
    cout<<"----------------------------------------\n\n";
    if(op==1)
      break;
  }
}
