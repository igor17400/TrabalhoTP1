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
        cout << "Endere�o n�o pode ter menos que 5 caracteres e mais de 20 caracteres. Endere�o inserido: " << endereco << endl;
        throw invalid_argument("Endere�o inv�lido.");
    }

    if (!isupper(endereco[0])) {
        cout << "Endere�o precisa conter a primeira letra sendo mai�scula. Endere�o inserido: " << endereco << endl;
        throw invalid_argument("Endere�o inv�lido.");
    }

    if (isdigit(endereco[0])) {
        cout << "Endere�o n�o pode conter um n�mero como primeiro caractere. Endere�o inserido: " << endereco << endl;
        throw invalid_argument("Endere�o inv�lido.");
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
    cout << "Endere�o: " << this->endereco << endl;
}
