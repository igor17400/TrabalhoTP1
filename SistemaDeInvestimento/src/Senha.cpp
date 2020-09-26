#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>

#include "Senha.h"

Senha::Senha(string senha)
{
    SetSenha(senha);
}

void Senha::ValidarSenha(string senha) throw (invalid_argument) {
    if (senha == "0") {
        throw invalid_argument("Senha inválida.");
    }
}

void Senha::SetSenha(string senha) throw (invalid_argument) {
    this->senha = senha;
}

string Senha::GetSenha() {
    return this->senha;
}

void Senha::Print() const {
    cout << "Senha: " << this->senha<< endl;
}
