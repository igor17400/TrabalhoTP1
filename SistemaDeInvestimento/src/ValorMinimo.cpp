#include <iostream>
#include <stdio.h>
#include <sstream>
#include <stdexcept>

#include "ValorMinimo.h"

using namespace std;

ValorMinimo::ValorMinimo(){}


ValorMinimo::ValorMinimo(double valor){
    SetValorMinimo(valor);
}

void ValorMinimo::ValidarValorMinimo(double valor) throw (invalid_argument) {
    if(valor != 1000 && valor != 5000 && valor != 10000 && valor != 50000)
        throw invalid_argument("Valor M�nimo Inv�lido.");
}

void ValorMinimo::SetValorMinimo(double valor) throw (invalid_argument) {
    ValidarValorMinimo(valor);
    this->valor = valor;
}


double ValorMinimo::GetValorMinimo() {
    return this->valor;
}

void ValorMinimo::Print() const {
    cout << "Valor: " << this->valor << endl;
}
