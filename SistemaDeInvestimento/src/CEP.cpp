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
    std::string::size_type sz;
    long cep_dec = std::stol (cep,&sz);

    if (!( (cep_dec >= 1000000  && cep_dec <= 5999999)  ||
           (cep_dec >= 8000000  && cep_dec <= 8499999)  ||
           (cep_dec >= 20000000 && cep_dec <= 26600999) ||
           (cep_dec >= 70000000 && cep_dec <= 70999999) ||
           (cep_dec >= 40000000 && cep_dec <= 41999999) ||
           (cep_dec >= 60000000 && cep_dec <= 60999999) )) {
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
