#ifndef CODIGOAPLICACAO_H
#define CODIGOAPLICACAO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class CodigoAplicacao
{
    public:
        CodigoAplicacao(string codigo="000000");
        void ValidarCodigoAplicacao(string) throw (invalid_argument);
        void SetCodigoAplicacao(string) throw (invalid_argument);
        string GetCodigoAplicacao();

        void Print() const;


    protected:

    private:
        string codigo;
};

#endif // CODIGOAPLICACAO_H
