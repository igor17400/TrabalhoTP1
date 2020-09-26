#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "CEP.h"

using namespace std;

CEP::CEP(string cep)
{
    SetCep(cep);
}

void CEP::ValidarCep(string cep) throw (invalid_argument) {
    if (cep == "000000") {
        throw invalid_argument("CEP inválido.");
    }
}

void CEP::SetCep(string cep) throw (invalid_argument) {
    ValidarCep(cep);
    this->cep = cep;
}


string CEP::GetCep() {
    return this->cep;
}

void CEP::Print() const {
    cout << "CEP: " << this->cep << endl;
}
