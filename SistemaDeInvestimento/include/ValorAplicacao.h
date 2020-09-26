#ifndef VALORAPLICACAO_H
#define VALORAPLICACAO_H


#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class ValorAplicacao
{
    public:
        ValorAplicacao(double valor=0.0);
        void ValidarValorAplicacao(double) throw (invalid_argument);
        void SetValorAplicacao(double) throw (invalid_argument);
        double GetValorAplicacao();

        void Print() const;


    protected:

    private:
        double valor;
};

#endif // VALORAPLICACAO_H
