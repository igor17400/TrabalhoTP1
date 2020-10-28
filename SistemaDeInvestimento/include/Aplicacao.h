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
        Aplicacao(const Conta &, const CodigoAplicacao &, const ValorAplicacao &, const Data &);

    private:
        const Conta conta;
        const CodigoAplicacao codigoAplicacao;
        const ValorAplicacao valorAplicacao;
        const Data dataObj;
};

#endif // APLICACAO_H
