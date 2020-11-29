#include "Aplicacao.h"
#include "CodigoAplicacao.h"
#include "CodigoAgencia.h"

#include "CodigoAplicacao.h"
#include "ValorAplicacao.h"
#include "Data.h"
#include "Conta.h"

using namespace std;

Aplicacao::Aplicacao() {}

Aplicacao::Aplicacao(const CodigoAplicacao& codigoAplicacao, const ValorAplicacao& valorAplicacao, const Data& dataObj)
    :   codigoAplicacao(codigoAplicacao),
        valorAplicacao(valorAplicacao),
        dataObj(dataObj)
        {}

void Aplicacao::setCodigoAplicacao(const string str){
    CodigoAplicacao codigoAplicacao(str);
    this->codigoAplicacao = codigoAplicacao;
}

CodigoAplicacao Aplicacao::getCodigoAplicacao() const{
    return this->codigoAplicacao;
}

void Aplicacao::setValorAplicacao(const int valor){
    ValorAplicacao valorAplicacao(valor);
    this->valorAplicacao = valorAplicacao;
}

ValorAplicacao Aplicacao::getValorAplicacao() const{
    return this->valorAplicacao;
}

void Aplicacao::setData(const string str){
    Data data(str);
    this->dataObj = data;
}

Data Aplicacao::getData() const{
    return this->dataObj;
}

void Aplicacao::setProduto(const Produto& produto){
    this->produto = produto;
}

CodigoProduto Aplicacao::getProdutoCodigo() const{
    return this->produto.getCodigoProduto();
}






