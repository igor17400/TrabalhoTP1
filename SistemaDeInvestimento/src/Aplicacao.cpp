#include "Aplicacao.h"

#include <ctime>
#include <iostream>
#include <string>
using namespace std;

Aplicacao::Aplicacao(string codigoAplicacao, double valorAplicacao) {

    // current date/time based on current system
    time_t now = time(0);
    // convert now to string form
    char* data = ctime(&now);

    setCodigoAplicacao(codigoAplicacao);
    setValorAplicacao(valorAplicacao);
    setData(data);
}

void Aplicacao::setCodigoAplicacao(string codigoAplicacao) {
    this->codigoAplicacao = codigoAplicacao;
}

void Aplicacao::setValorAplicacao(double valorAplicacao) {
    this->valorAplicacao = valorAplicacao;
}

void Aplicacao::setData(string data) {
    this->data = data;
}
