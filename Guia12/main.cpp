#include <iostream>
using namespace std;

int a=1;
int funcion (int numIn){
  a=a+1;
  int numFin= numIn * numIn;
  return numFin;
}

int main(){
  int b= 2;
  int c=3;
  
  cout << (a+2*funcion(b))*(c+2*funcion(b))<< endl;
  cout << (a+2*funcion(b))*(c+2*funcion(b));
}
