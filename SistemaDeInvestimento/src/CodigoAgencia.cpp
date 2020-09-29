#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CodigoAgencia.h"

using namespace std;

CodigoAgencia::CodigoAgencia() {}

CodigoAgencia::CodigoAgencia(string codigo) {
    SetCodigoAgencia(codigo);
}

void CodigoAgencia::ValidarCodigoAgencia(string codigo) throw (invalid_argument) {
    if (codigo == "0000") {
        throw invalid_argument("Código de Agência inválido.");
    }
}

void CodigoAgencia::SetCodigoAgencia(string codigo) throw (invalid_argument) {
    ValidarCodigoAgencia(codigo);
    this->codigo = codigo;
}

string CodigoAgencia::GetCodigoAgencia() {
    return this->codigo;
}

void CodigoAgencia::Print() const {
    cout << "Código da Agência: " << this->codigo << endl;
}
