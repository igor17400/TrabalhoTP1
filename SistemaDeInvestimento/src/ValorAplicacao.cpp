#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "ValorAplicacao.h"

using namespace std;

ValorAplicacao::ValorAplicacao() {}

ValorAplicacao::ValorAplicacao(double valor) {
    SetValorAplicacao(valor);
}

void ValorAplicacao::ValidarValorAplicacao(double valor) throw (invalid_argument) {
    if (valor < 0.0 ) {
        throw invalid_argument("Valor de aplicação é inválido.");
    }
}

void ValorAplicacao::SetValorAplicacao(double valor) throw (invalid_argument) {
    ValidarValorAplicacao(valor);
    this->valor = valor;
}

double ValorAplicacao::GetValorAplicacao() {
    return this->valor;
}
void ValorAplicacao::Print() const {
    cout << "Valor da Aplicação: " << this->valor << endl;
}
