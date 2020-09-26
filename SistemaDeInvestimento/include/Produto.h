#ifndef PRODUTO_H
#define PRODUTO_H

#include "Conta.h"

class Produto
{
    public:
        Produto(string codigo, string classe, int prazo, string data, double taxa, string horario, double valorMinimo);

        void setCodigo(string);
        void setClasse(string);
        void setPrazo(int);
        void setData(string);
        void setTaxa(double);
        void setHorario(string);
        void setValorMinimo(double);

    protected:

    private:
        string codigo;
        string classe;
        int prazo;
        string data;
        double taxa;
        string horario;
        double valorMinimo;
};

#endif // PRODUTO_H
