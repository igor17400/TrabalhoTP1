#ifndef CODIGOBANCO_H
#define CODIGOBANCO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;


class CodigoBanco
{
    public:
        CodigoBanco(string codigo);

        void ValidarCodigoBanco(string) throw (invalid_argument);
        void SetCodigoBanco(string) throw (invalid_argument);
        string GetCodigoBanco();

        void Print() const;

    protected:

    private:
        string codigo;
};

#endif // CODIGOBANCO_H
