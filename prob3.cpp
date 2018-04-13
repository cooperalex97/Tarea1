#include <iostream>

using namespace std;

void ingresarE(int A[100],int &n)
{
  cout<<"Numero de elementos del array: ";cin>>n;

  for(int i=0;i<n;i++)
  {
    cout<<"Elemento ["<<i<<"]: ";
    cin>>A[i];
  }

  cout<<"Tu array creado es : \n";
  cout<<"A =[";
  for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
  cout<<"]";
}

void insertion_sort(int A[],int n)
{
  int i, key;
  for (int j=1;j<n;j++)
  {
    key=A[j];
    i=j-1;
    while(i>=0 && A[i]>key)
    {
      A[i+1]=A[i];
      i=i-1;
    }
    A[i+1]=key;
  }
  

}

void print_(int A[], int n)
{
  for(int k = 0;A[k] != '\0';k++)
  {
    cout<<A[k];
  }
}

int main()
{
  int A[100],n;
  ingresarE(A,n);
  insertion_sort(A,n);
  print_(A,n);
  return 0;
}
