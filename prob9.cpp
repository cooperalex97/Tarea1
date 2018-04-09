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

bool palindrome(char *s){
    int tam = tam2(s);
    for (int i =0;i<tam/2;i++){
        if (*(s+tam-1-i) != *(s+i))
            return false;
    }
    return true;
}

int main()
{
  int s=0,op;
  while(s==0)
  {
    char cad[]="";
    cout<<"\t\t Bienvenido a PALINDROMO"<<endl;
    cout<<"\nCadena? ";
    cin>> cad;
    if (palindrome(cad)==true)
    {
      cout<<"Si es palindrome"<<endl;
    }
    else
    {
      cout <<"No es palindrome"<<endl;
    }
    cout<<"\nPAra Salir ingrese 1"<<endl;
    cout<<"Para Continuar ingrese otro número"<<endl;
    cout<<"Salir? ";cin>>op;
    cout<<"-----------------------------------------------\n"<<endl;
    if(op==1)
      break;
  }
}
