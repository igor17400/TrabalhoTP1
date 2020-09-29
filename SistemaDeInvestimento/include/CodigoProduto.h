#ifndef CODIGOPRODUTO_H
#define CODIGOPRODUTO_H

#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

/// Classe criada para representar o c&oacute;digo de produto escolhido.
class CodigoProduto
{
    public:
        CodigoProduto(string codigo="000000");

        void SetCodigoProduto(string) throw (invalid_argument);

        string GetCodigoProduto();

        void Print() const;

    private:
        string codigo;
        void ValidarCodigoProduto(string) throw (invalid_argument);
};


#endif // CODIGOPRODUTO_H
