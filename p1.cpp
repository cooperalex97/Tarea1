#include <iostream>
using namespace std;

int lala(int n,int m)
{
  n=n+2;
  m=m-1;
  return m*n;
}

int main(int argc,const char* argv[])
{
  int a,b;
  cout<<"Enter A: ";cin>>a;
  cout<<"Enter B: ";cin>>b;
  cout<<a<<" * "<<b<<" ---> "<<lala(a,b);
  return 0;
}
