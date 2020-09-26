#include "Aplicacao.h"
#include "CodigoAplicacao.h"
#include "CodigoAgencia.h"

#include "CodigoAplicacao.h"
#include "ValorAplicacao.h"
#include "Data.h"

using namespace std;

Aplicacao::Aplicacao(const Conta& conta, const CodigoAplicacao& codigoAplicacao, const ValorAplicacao& valorAplicacao, const Data& dataObj)
    :   conta(conta),
        codigoAplicacao(codigoAplicacao),
        valorAplicacao(valorAplicacao),
        dataObj(dataObj)
        {}
