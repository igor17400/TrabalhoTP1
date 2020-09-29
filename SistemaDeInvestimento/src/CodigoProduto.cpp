#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CodigoProduto.h"

using namespace std;

CodigoProduto::CodigoProduto(string codigo)
{
    SetCodigoProduto(codigo);
}

void CodigoProduto::ValidarCodigoProduto(string codigo) throw (invalid_argument) {
    if (codigo == "000") {
        throw invalid_argument("Codigo Inválido.");
    }
}

void CodigoProduto::SetCodigoProduto(string codigo) throw (invalid_argument) {
    ValidarCodigoProduto(codigo);
    this->codigo = codigo;
}


string CodigoProduto::GetCodigoProduto() {
    return this->codigo;
}

void CodigoProduto::Print() const {
    cout << "CodigoProduto: " << this->codigo << endl;
}
