#include <iostream>
using namespace std;

void readMatrix(int A[10][10],int fil,int col)//llee los elementos ingresados
{
  for (int i=0;i<fil;i++)
      {
        for (int j=0;j<col;j++){
          cout<<"Digite un numero["<<i<<"]["<<j<<"] : ";
          cin>>A[i][j];
        }
      }
}

void showMatrix(int A[10][10],int fil,int col)//muestra la matriz formada
{
 cout<<"La matriz formada es la siguiente:\n";
 for (int i=0;i<fil;i++)
 {
  for (int j=0;j<col;j++){
      cout<<A[i][j]<<" ";
  }
  cout<<"\n";
 }
}

void productMatrix (int A[10][10],int B[10][10],int C[10][10],int fil,int col)
//multiplica ambas matrices
{
 for (int i=0;i<fil;i++)
     for(int j=0;j<col;j++)
      {   C[i][j] = 0;
          for(int k=0;k<fil*col;k++)
              C[i][j] = C[i][j] + A[i][j] * B[i][j];
      }
 }

int main()
{
    int A[10][10],B[10][10],C[10][10],fil,col;
    cout<<"Ingrese numero de filas: "<<endl;cin>>fil;
    cout<<"Ingrese numero de columnas: "<<endl;cin>>col;
    readMatrix(A,fil,col);
    showMatrix(A,fil,col);
    readMatrix(B,fil,col);
    showMatrix(B,fil,col);

    productMatrix(A,B,C,fil,col);
    cout<<"El producto vale: ";
    showMatrix(C,fil,col);
    return 0;
}
