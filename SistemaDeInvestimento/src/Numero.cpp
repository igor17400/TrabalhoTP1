#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Numero.h"

using namespace std;

Numero::Numero(string numero) {
    SetNumero(numero);
}

void Numero::ValidarNumero(string numero) throw (invalid_argument) {
    if (numero == "000000-0") {
        throw invalid_argument("N�mero inv�lido.");
    }
}

void Numero::SetNumero(string numero) throw (invalid_argument) {
    ValidarNumero(numero);
    this->numero = numero;
}

string Numero::GetNumero() {
    return this->numero;
}

void Numero::Print() const {
    cout << "N�mero: " << this->numero;
}
