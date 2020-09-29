#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Emissor.h"

using namespace std;

Emissor::Emissor(){}

Emissor::Emissor(string emissor) {
    SetEmissor(emissor);
}

void Emissor::ValidarEmissor(string emissor) throw (invalid_argument) {
    if (emissor == "bank") {
        throw invalid_argument("Emissor Inválido.");
    }
}

void Emissor::SetEmissor(string emissor) throw (invalid_argument) {
    ValidarEmissor(emissor);
    this->emissor = emissor;
}


string Emissor::GetEmissor() {
    return this->emissor;
}

void Emissor::Print() const {
    cout << "Emissor: " << this->emissor << endl;
}
