#ifndef CODIGOAGENCIA_H
#define CODIGOAGENCIA_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class CodigoAgencia
{
    public:
        CodigoAgencia(string codigo="00000");
        void SetCodigoAgencia(string) throw (invalid_argument);
        string GetCodigoAgencia();
        void Print() const;

    private:
        string codigo;

        void ValidarCodigoAgencia(string) throw (invalid_argument);
};

#endif // CODIGOAGENCIA_H
