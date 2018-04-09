#include <iostream>
using namespace std;

int sumVre(int V[], int t)//Recursiva
{
  if (t == 0)//Paso Base
  {
      return 0;
  }
  else//PArte _Inductiva
  {
      return V[t-1] + sumVre(V,--t);
  }
}

int sumVite(int V[], int t)//Iterativa
{
  int result = 0;
  for (int i =0; i<t; i++) {
      result = result + V[i];
  }
  return result;
}

int main(){
  int V[5]={1,2,3,4,5};//Declaro un vector con 5 elementos
  int t = 5;//En la variable t =guardo el largo del vector V
  cout <<"Respuesta de Funcion recursiva --> " <<sumVre(V,t)<<endl;
  cout <<"Respuesta de Funcion iterativa --> " <<sumVite(V,t);
}
