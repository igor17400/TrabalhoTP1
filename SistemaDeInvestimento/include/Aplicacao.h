#ifndef APLICACAO_H
#define APLICACAO_H

#include <iostream>
#include <string>

#include "CodigoAplicacao.h"
#include "ValorAplicacao.h"
#include "Data.h"
#include "Conta.h"

using namespace std;

class Aplicacao
{
    public:
        Aplicacao();
        Aplicacao(const CodigoAplicacao &, const ValorAplicacao &, const Data &);

        void setCodigoAplicacao(const string);
        CodigoAplicacao getCodigoAplicacao() const;

        void setValorAplicacao(const int);
        ValorAplicacao getValorAplicacao() const;

        void setData(const string);
        Data getData() const;

    private:
        CodigoAplicacao codigoAplicacao;
        ValorAplicacao valorAplicacao;
        Data dataObj;
};

#endif // APLICACAO_H




