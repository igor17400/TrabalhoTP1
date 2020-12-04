#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Nome.h"

using namespace std;

Nome::Nome() {}

Nome::Nome(string nome) {
    SetNome(nome);
}

void Nome::ValidarNome(string nome) throw (invalid_argument) {
    if (nome.length() < 1 || nome.length() > 30) {
        throw invalid_argument("Nome inv�lido.");
    }
}

void Nome::SetNome(string nome) throw (invalid_argument) {
    ValidarNome(nome);
    this->nome = nome;
}

string Nome::GetNome() {
    return this->nome;
}

void Nome::Print() const {
    cout << "Nome: " << this->nome<< endl;
}
