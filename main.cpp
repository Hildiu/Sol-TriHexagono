#include <iostream>
#include "CTriangulo.h"
#include "CHexagono.h"
using namespace  std;

template <typename T>
void imprimir(T &Objeto);

int main()
{
  CTriangulo T(12);
  CHexagono  H(10);

  cout <<"Del Triangulo";
  imprimir<CTriangulo>(T);
  cout << "\n";
  cout <<"Del Hexagono";
  imprimir<CHexagono>(H);

  return 0;
}

template <typename T>
void imprimir(T &Objeto)
{
  cout << "\n";
  cout << "El Semiperimetro es : " << Objeto.semiperimetro() << "\n";
  cout << "El apotema es       : " << Objeto.apotema();
  cout << "\n";
}