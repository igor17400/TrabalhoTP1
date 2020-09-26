#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CodigoBanco.h"

using namespace std;

CodigoBanco::CodigoBanco(string codigo)
{
    SetCodigoBanco(codigo);
}

void CodigoBanco::ValidarCodigoBanco(string codigo) throw (invalid_argument) {
    if (codigo == "000000") {
        throw invalid_argument("C�digo de Banco inv�lido.");
    }
}

void CodigoBanco::SetCodigoBanco(string codigo) throw (invalid_argument) {
    ValidarCodigoBanco(codigo);
    this->codigo = codigo;
}

string CodigoBanco::GetCodigoBanco() {
    return this->codigo;
}

void CodigoBanco::Print() const {
    cout << "C�digo do Banco: " << this->codigo;
}
