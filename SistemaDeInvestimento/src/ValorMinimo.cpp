#include <iostream>
#include <stdio.h>
#include <sstream>
#include <stdexcept>

#include "ValorMinimo.h"

using namespace std;

ValorMinimo::ValorMinimo(double valor){
    SetValorMinimo(valor);
}

void ValorMinimo::ValidarValorMinimo(double valor) throw (invalid_argument) {
    if (valor < 0.0) {
        throw invalid_argument("Valor Inválido.");
    }
}

void ValorMinimo::SetValorMinimo(double valor) throw (invalid_argument) {
    SetValorMinimo(valor);
    this->valor = valor;
}


double ValorMinimo::GetValorMinimo() {
    return this->valor;
}

void ValorMinimo::Print() const {
    cout << "Valor: " << this->valor << endl;
}
