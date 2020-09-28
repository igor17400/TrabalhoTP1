#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Endereco.h"

using namespace std;

Endereco::Endereco(string endereco){
    SetEndereco(endereco);
}

void Endereco::ValidarEndereco(string endereco) throw (invalid_argument) {
    if (endereco.length() < 5 || endereco.length() > 21) {
        throw invalid_argument("Endereço inválido.");
    }

    if (!isupper(endereco[0])) {
        throw invalid_argument("Endereço inválido.");
    }

    if (isdigit(endereco[0])) {
        throw invalid_argument("Endereço inválido.");
    }
}

void Endereco::SetEndereco(string endereco) throw (invalid_argument) {
    ValidarEndereco(endereco);
    this->endereco = endereco;
}

string Endereco::GetEndereco() {
    return this->endereco;
}

void Endereco::Print() const {
    cout << "Endereço: " << this->endereco << endl;
}
