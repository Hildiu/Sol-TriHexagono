//
// Created by MARIA HILDA BERMEJO RIOS on 11/8/20.
//

#ifndef P3_CTRIANGULO_H
#define P3_CTRIANGULO_H

#include <cmath>

using tnum=double;

class CTriangulo
{private:
    tnum lado;
public:
    CTriangulo(tnum _lado):lado(_lado){};
    virtual ~CTriangulo() {};
    tnum semiperimetro();
    tnum apotema();
};


#endif //P3_CTRIANGULO_H
