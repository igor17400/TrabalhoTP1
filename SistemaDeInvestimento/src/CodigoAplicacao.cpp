#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CodigoAplicacao.h"

using namespace std;

CodigoAplicacao::CodigoAplicacao(string codigo) {
    SetCodigoAplicacao(codigo);
}

void CodigoAplicacao::ValidarCodigoAplicacao(string codigo) throw (invalid_argument) {
    if (codigo == "000000") {
        throw invalid_argument("Código de aplicação inválido.");
    }
}

void CodigoAplicacao::SetCodigoAplicacao(string codigo) throw (invalid_argument) {
    ValidarCodigoAplicacao(codigo);
    this->codigo = codigo;
}

string CodigoAplicacao::GetCodigoAplicacao() {
    return this->codigo;
}
void CodigoAplicacao::Print() const {
    cout << "Código de Aplicação: " << this->codigo << endl;
}
