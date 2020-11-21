//
// Created by MARIA HILDA BERMEJO RIOS on 11/8/20.
//

#include "CHexagono.h"


tnum CHexagono::semiperimetro()
{
  return 3*lado;
}

tnum CHexagono::apotema()
{
   return lado*sqrt(3)/2;
}