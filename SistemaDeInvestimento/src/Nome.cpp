#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Nome.h"

using namespace std;

Nome::Nome(string nome) {
    SetNome(nome);
}

void Nome::ValidarNome(string nome) throw (invalid_argument) {
    if (nome.length() < 5 || nome.length() > 30) {
        cout << "Nome não pode ter menos que 5 caracteres e mais de 30 caracteres. Nome inserido: " << nome << endl;
        throw invalid_argument("Nome inválido.");
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
