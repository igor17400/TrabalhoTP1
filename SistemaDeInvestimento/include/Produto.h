#ifndef PRODUTO_H
#define PRODUTO_H

#include "CodigoProduto.h"
#include "Classe.h"
#include "Emissor.h"
#include "Data.h"
#include "Taxa.h"
#include "Horario.h"
#include "ValorMinimo.h"
#include "Prazo.h"

class Produto
{
    public:
        Produto(const CodigoProduto&, const Classe&, const Emissor&,
                const Prazo&, const Data&, const Taxa&,
                const Horario&, const ValorMinimo&);

    protected:

    private:
        const CodigoProduto codigoProduto;
        const Classe classe;
        const Prazo prazo;
        const Data vencimento;
        const Taxa taxa;
        const Horario horario;
        const ValorMinimo valorMinimo;
};

#endif // PRODUTO_H
