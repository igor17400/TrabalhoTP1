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
        Produto();
        Produto(const CodigoProduto&, const Classe&, const Emissor&,
                const Prazo&, const Data&, const Taxa&,
                const Horario&, const ValorMinimo&);

        void setCodigoProduto(const string);
        CodigoProduto getCodigoProduto() const;

        void setClasse(const string);
        Classe getClasse() const;

        void setEmissor(const string);
        Emissor getEmissor() const;

        void setPrazo(const int);
        Prazo getPrazo() const;

        void setVencimento(const string);
        Data getVencimento() const;

        void setTaxa(const int);
        Taxa getTaxa() const;

        void setHorario(const string);
        Horario getHorario() const;

        void setValorMinimo(const int);
        ValorMinimo getValorMinimo() const;


    private:
        CodigoProduto codigoProduto;
        Classe classe;
        Emissor emissor;
        Prazo prazo;
        Data vencimento;
        Taxa taxa;
        Horario horario;
        ValorMinimo valorMinimo;
};

#endif // PRODUTO_H
