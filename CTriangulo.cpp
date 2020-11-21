//
// Created by MARIA HILDA BERMEJO RIOS on 11/8/20.
//

#include "CTriangulo.h"

tnum CTriangulo::semiperimetro()
{
  return 3*lado/2;
}

tnum CTriangulo::apotema()
{
  return lado*sqrt(3)/6;
}