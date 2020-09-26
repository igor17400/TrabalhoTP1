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
        cout << "Endereço não pode ter menos que 5 caracteres e mais de 20 caracteres. Endereço inserido: " << endereco << endl;
        throw invalid_argument("Endereço inválido.");
    }

    if (!isupper(endereco[0])) {
        cout << "Endereço precisa conter a primeira letra sendo maiúscula. Endereço inserido: " << endereco << endl;
        throw invalid_argument("Endereço inválido.");
    }

    if (isdigit(endereco[0])) {
        cout << "Endereço não pode conter um número como primeiro caractere. Endereço inserido: " << endereco << endl;
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
