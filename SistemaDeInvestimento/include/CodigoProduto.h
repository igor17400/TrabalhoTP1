#ifndef CODIGOPRODUTO_H
#define CODIGOPRODUTO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class CodigoProduto
{
    public:
        CodigoProduto(string codigo="000000");
        void ValidarCodigoProduto(string) throw (invalid_argument);
        void SetCodigoProduto(string) throw (invalid_argument);
        string GetCodigoProduto();

        void Print() const;

    protected:

    private:
        string codigo;
};


#endif // CODIGOPRODUTO_H
