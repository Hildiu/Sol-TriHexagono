//
// Created by MARIA HILDA BERMEJO RIOS on 11/8/20.
//

#ifndef P3_CHEXAGONO_H
#define P3_CHEXAGONO_H

#include <cmath>
using tnum=double;

class CHexagono
{
  private:
    tnum lado;
  public:
    CHexagono(tnum _lado):lado(_lado){};
    virtual ~CHexagono() {};
    tnum semiperimetro();
    tnum apotema();
};


#endif //P3_CHEXAGONO_H
